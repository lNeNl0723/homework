#include <iostream>
using namespace std;
#include "class.h"
#include "charter.h"
#include "loop.h"

int main() {
    int i = 0;
    double l = 0, a = 0, d = 0;
    charter* p1 = nullptr;
    charter* p2 = nullptr;

    cout << "===歡迎來到遊戲===" << endl;

    // p1角色選擇
    while (true) {
        cout << "===p1選擇職業===" << endl;
        cout << "1.騎士 2.法師 3.治療者" << endl;
        cin >> i;
        cout << "請輸入數值(life atk def，加總需為20): ";
        cin >> l >> a >> d;
        if (l + a + d != 20) {
            cout << "建立失敗，請重新輸入(總和必須為20)" << endl;
            continue;
        }
        switch (i) {
        case 1:
            p1 = new kinght(l, a, d);
            break;
        case 2:
            p1 = new mage(l, a, d);
            break;
        case 3:
            p1 = new healer(l, a, d);
            break;
        default:
            cout << "無效選項" << endl;
            continue;
        }
        cout << "建立成功" << endl;
        break;
    }

    // p2角色選擇
    while (p2 == nullptr) {
        cout << "===p2選擇職業===" << endl;
        cout << "1.騎士 2.法師 3.治療者" << endl;
        cin >> i;
        cout << "請輸入數值(life atk def，加總需為20): ";
        cin >> l >> a >> d;
        if (l + a + d != 20) {
            cout << "建立失敗，請重新輸入(總和必須為20)" << endl;
            continue;
        }
        switch (i) {
        case 1:
            p2 = new kinght(l, a, d);
            break;
        case 2:
            p2 = new mage(l, a, d);
            break;
        case 3:
            p2 = new healer(l, a, d);
            break;
        default:
            cout << "無效選項" << endl;
            continue;
        }
        cout << "建立成功" << endl;
        break;
    }

    // 回合制戰鬥
    while (true) {
        // p1行動
        p1->redef();
        cout << "===p1的回合===\n1.攻擊 2.使用技能 3.進行防禦" << endl;
        cin >> i;
        switch (i) {
        case 1:
            cout << "p1攻擊!" << endl;
            dmacount(*p2, *p1);
            break;
        case 2:
            cout << "p1使用技能!" << endl;
            p1->useskill();
            break;
        case 3:
            cout << "p1防禦!" << endl;
            defon(*p1);
            break;
        default:
            cout << "無效選項" << endl;
            continue;
        }
        cout << "p2剩餘生命值: " << p2->getlife() << endl;
        if (p2->getlife() <= 0) {
            cout << "p1勝利!" << endl;
            break;
        
        }

        // p2行動
        p2->redef();
        cout << "===p2的回合===\n1.攻擊 2.使用技能 3.進行防禦" << endl;
        cin >> i;
        switch (i) {
        case 1:
            cout << "p2攻擊!" << endl;
            dmacount(*p1, *p2);
            break;
        case 2:
            cout << "p2使用技能!" << endl;
            p2->useskill();
            break;
        case 3:
            cout << "p2防禦!" << endl;
            defon(*p2);
            break;
        default:
            cout << "無效選項" << endl;
            continue;
        }
        cout << "p1剩餘生命值: " << p1->getlife() << endl;
        if (p1->getlife() <= 0) {
            cout << "p2勝利!" << endl;
            break;
        }
    }

    delete p1;
    delete p2;
    return 0;
}