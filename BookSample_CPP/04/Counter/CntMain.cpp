#include  <iostream>
#include  "Counter.h"
using  namespace  std;

int  main()
{
    Counter  cnt;        // Counter ��ü�� ����
    cnt.reset();         // ����⸦ 0���� ����.
    cout << "ī������ ���� �� : " << cnt.getValue() << endl;
    cnt.count();         // ����⸦ 1 ������Ŵ.
    cnt.count();
    cout << "ī������ ���� �� : " << cnt.getValue() << endl;
    return 0;
}