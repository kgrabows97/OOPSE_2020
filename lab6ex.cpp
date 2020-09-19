#include <iostream>
using namespace std;
class processor {
int n_thread;
int n_core;
public:
int proc_param(int thr, int cores) {
n_thread = thr;
n_core = cores;
}
void disp_param();
};
void processor::disp_param() {
cout << "\nProcessor has " << n_thread << " threads";
cout << "\nProcesor has " << n_core << " cores";
}
main() {
processor i5, i7;
cout << "Program stores and displays the processors "<< "data\n";
i5.proc_param(4, 4);
i7.proc_param(8, 4);
cout << "\n\ti5\n";
i5.disp_param();
cout << endl;
cout << "\n\ti7\n";
i7.disp_param();
cout << endl;
return 0;}
