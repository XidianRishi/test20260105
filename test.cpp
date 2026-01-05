#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 1.0;       // 初始值（选择正数）
    double alpha = 0.01;  // 学习率
    double tolerance = 1e-6; // 收敛容忍度
    int max_iterations = 1000; // 最大迭代次数
    
    for (int i = 0; i < max_iterations; ++i) {
        double gradient = 4 * x * (x * x - 2); // 梯度: df/dx = 4x(x²-2)
        double update = alpha * gradient;
        x -= update;  // 梯度下降更新
        
        if (abs(update) < tolerance) break; // 检查收敛
    }
    
    cout << "√2 ≈ " << x << endl;
    cout << "验证: " << x << "² = " << x * x << endl;
    return 0;
}
