#include <iostream>
using namespace std;


/*
    作业：

	1. 使用命名空间定义三个学生，包含变量：姓名、学号、表示6个学科成绩的数组
	2. 从键盘获取三个学生的以上信息。（注意：每个学生有6科成绩要记录）
	3. 输入完成后，展示每个学生的姓名、学号、总分、平均分。
 */

namespace zhangsan{
    string name;
    string id;
    int scorces[6];
}

namespace lisi{
    string name;
    string id;
    int scorces[6];
}

namespace wangwu{
    string name;
    string id;
    int scorces[6];
}

int main() {
    cout << "please zhangsan news";
    cin >> zhangsan::name;
    cin >> zhangsan::id;
    cout << "please zhangsan score:" << endl;
    int zs_total = 0;
    for(int i = 0 ; i < sizeof(zhangsan::scorces)/sizeof(int);++i){
        cin >> zhangsan::scorces[i];
        zs_total+=zhangsan::scorces[i];
    }

    cout << "please lisi news";
    cin >> lisi::name;
    cin >> lisi::id;
    cout << "please lisi score:" << endl;
    int ll_total = 0;
    for(int i=0;i < sizeof(lisi::scorces)/sizeof(int);++i){
        cin >> lisi::scorces[i];
        ll_total+=lisi::scorces[i];
    }

    cout << "please wangwu news";
    cin >> wangwu::name;
    cin >> wangwu::id;
    cout << "please zhangsan score:" << endl;
    int ww_total = 0;
    for(int i=0;i < sizeof(wangwu::scorces)/sizeof(int);++i){
        cin >> wangwu::scorces[i];
        ww_total+=wangwu::scorces[i];
    }

    cout << zhangsan::name << ":" << zhangsan::id << ":"<<zs_total<<":"<<zs_total/6 << endl;
    cout << lisi::name << ":" << lisi::id << ":"<<ll_total<<":"<<ll_total/6 << endl;
    cout << wangwu::name << ":" << wangwu::id << ":"<<ww_total<<":"<<ww_total/6 << endl;


    return 0;
}
