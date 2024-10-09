#include <iostream>
using namespace std;

int main() {
    const int totalBranches = 3;
    const int monthsInYear = 3;
    int sales[totalBranches][monthsInYear];
    int totalSales[totalBranches] = {0};
    int maxSale = 0, minSale;
    int maxBranch = 0, minBranch = 0;

    for (int i = 0; i < totalBranches; i++) {
        cout << "Enter the monthly sales for branch " << i + 1 << ":\n";
        for (int j = 0; j < monthsInYear; j++) {
            cout << "Month " << j + 1 << " sales branch "<<j+1<<"  :";
            cin >> sales[i][j];
            totalSales[i] += sales[i][j];  
        }
    }
    minSale = totalSales[0];

    for (int i = 0; i < totalBranches; i++) {
        if (totalSales[i] > maxSale) {
            maxSale = totalSales[i];
            maxBranch = i + 1;
        }
        
        if (totalSales[i] < minSale) {
            minSale = totalSales[i];
            minBranch = i + 1;
        }

    }
    int companyTotalSales = 0;
    for (int i = 0; i < totalBranches; i++) {
        companyTotalSales += totalSales[i];
    }

    cout << "\nTotal annual sales for the company: " << companyTotalSales << "\n";
    cout << "Branch " << maxBranch << " had the highest sales: " << maxSale << "\n";
    cout << "Branch " << minBranch << " had the lowest sales: " << minSale << "\n";

    return 0;
}
