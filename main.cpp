```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
      // 创建一个整数数组
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // 使用sort对数组进行排序
    std::sort(numbers.begin(), numbers.end());

    // 遍历数组并打印每个元素
    for (int num : numbers) {
        std::cout << num << " ";
    }

    // 打印换行符
    std::cout << std::endl;

    // 计算并打印数组中元素的总和
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum: " << sum << std::endl;

    // 查找并打印最大元素
    auto max_iter = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Max: " << *max_iter << std::endl;

    // 查找并打印最小元素
    auto min_iter = std::min_element(numbers.begin(), numbers.end());
    std::cout << "Min: " << *min_iter << std::endl;

    // 计算并打印平均值
    double average = static_cast<double>(sum) / numbers.size();
    std::cout << "Average: " << average << std::endl;

    return 0;
}
```
