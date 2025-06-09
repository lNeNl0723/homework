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

    cout << "===�w��Ө�C��===" << endl;

    // p1������
    while (true) {
        cout << "===p1���¾�~===" << endl;
        cout << "1.�M�h 2.�k�v 3.�v����" << endl;
        cin >> i;
        cout << "�п�J�ƭ�(life atk def�A�[�`�ݬ�20): ";
        cin >> l >> a >> d;
        if (l + a + d != 20) {
            cout << "�إߥ��ѡA�Э��s��J(�`�M������20)" << endl;
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
            cout << "�L�Ŀﶵ" << endl;
            continue;
        }
        cout << "�إߦ��\" << endl;
        break;
    }

    // p2������
    while (p2 == nullptr) {
        cout << "===p2���¾�~===" << endl;
        cout << "1.�M�h 2.�k�v 3.�v����" << endl;
        cin >> i;
        cout << "�п�J�ƭ�(life atk def�A�[�`�ݬ�20): ";
        cin >> l >> a >> d;
        if (l + a + d != 20) {
            cout << "�إߥ��ѡA�Э��s��J(�`�M������20)" << endl;
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
            cout << "�L�Ŀﶵ" << endl;
            continue;
        }
        cout << "�إߦ��\" << endl;
        break;
    }

    // �^�X��԰�
    while (true) {
        // p1���
        p1->redef();
        cout << "===p1���^�X===\n1.���� 2.�ϥΧޯ� 3.�i�樾�m" << endl;
        cin >> i;
        switch (i) {
        case 1:
            cout << "p1����!" << endl;
            dmacount(*p2, *p1);
            break;
        case 2:
            cout << "p1�ϥΧޯ�!" << endl;
            p1->useskill();
            break;
        case 3:
            cout << "p1���m!" << endl;
            defon(*p1);
            break;
        default:
            cout << "�L�Ŀﶵ" << endl;
            continue;
        }
        cout << "p2�Ѿl�ͩR��: " << p2->getlife() << endl;
        if (p2->getlife() <= 0) {
            cout << "p1�ӧQ!" << endl;
            break;
        
        }

        // p2���
        p2->redef();
        cout << "===p2���^�X===\n1.���� 2.�ϥΧޯ� 3.�i�樾�m" << endl;
        cin >> i;
        switch (i) {
        case 1:
            cout << "p2����!" << endl;
            dmacount(*p1, *p2);
            break;
        case 2:
            cout << "p2�ϥΧޯ�!" << endl;
            p2->useskill();
            break;
        case 3:
            cout << "p2���m!" << endl;
            defon(*p2);
            break;
        default:
            cout << "�L�Ŀﶵ" << endl;
            continue;
        }
        cout << "p1�Ѿl�ͩR��: " << p1->getlife() << endl;
        if (p1->getlife() <= 0) {
            cout << "p2�ӧQ!" << endl;
            break;
        }
    }

    delete p1;
    delete p2;
    return 0;
}