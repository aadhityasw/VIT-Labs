#include<iostream> 
using namespace std; 


void firstFit(int blockSize[], int m, int processSize[], int n) 
{  
    int allocation[n]; 
    memset(allocation, -1, sizeof(allocation)); 

    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < m; j++) 
        { 
            if (blockSize[j] >= processSize[i]) 
            { 
                allocation[i] = j; 
                blockSize[j] -= processSize[i]; 
                break; 
            } 
        } 
    } 
    cout << "First Fit Allocation : ";
    cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
    for (int i = 0; i < n; i++) 
    { 
        cout << " " << i+1 << "\t\t" 
             << processSize[i] << "\t\t"; 
        if (allocation[i] != -1) 
            cout << allocation[i] + 1; 
        else
            cout << "Not Allocated"; 
        cout << endl; 
    } 
}


void bestFit(int blockSize[], int m, int processSize[], int n) 
{ 
    int allocation[n]; 

    memset(allocation, -1, sizeof(allocation)); 
  
    for (int i=0; i<n; i++) 
    {  
        int bestIdx = -1; 
        for (int j=0; j<m; j++) 
        { 
            if (blockSize[j] >= processSize[i]) 
            { 
                if (bestIdx == -1) 
                    bestIdx = j; 
                else if (blockSize[bestIdx] > blockSize[j]) 
                    bestIdx = j; 
            } 
        }  
        if (bestIdx != -1) 
        { 
            allocation[i] = bestIdx; 
            blockSize[bestIdx] -= processSize[i]; 
        } 
    } 
  
    cout << "Best Fit Allocation : ";
    cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
    for (int i = 0; i < n; i++) 
    { 
        cout << "   " << i+1 << "\t\t" << processSize[i] << "\t\t"; 
        if (allocation[i] != -1) 
            cout << allocation[i] + 1; 
        else
            cout << "Not Allocated"; 
        cout << endl; 
    } 
} 


void worstFit(int blockSize[], int m, int processSize[], int n) 
{ 
    int allocation[n]; 
    memset(allocation, -1, sizeof(allocation)); 
    for (int i=0; i<n; i++) 
    { 
        int wstIdx = -1; 
        for (int j=0; j<m; j++) 
        { 
            if (blockSize[j] >= processSize[i]) 
            { 
                if (wstIdx == -1) 
                    wstIdx = j; 
                else if (blockSize[wstIdx] < blockSize[j]) 
                    wstIdx = j; 
            } 
        } 
        if (wstIdx != -1) 
        { 
            allocation[i] = wstIdx; 
            blockSize[wstIdx] -= processSize[i]; 
        } 
    } 
  
    cout << "Worst Fit Allocation : ";
    cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
    for (int i = 0; i < n; i++) 
    { 
        cout << "   " << i+1 << "\t\t" << processSize[i] << "\t\t"; 
        if (allocation[i] != -1) 
            cout << allocation[i] + 1; 
        else
            cout << "Not Allocated"; 
        cout << endl; 
    } 
}


int main() 
{ 
    int blockSize[] = {300, 600, 350, 200, 750,125}; 
    int processSize[] = {115,500, 358, 200, 375}; 
    int m = sizeof(blockSize) / sizeof(blockSize[0]); 
    int n = sizeof(processSize) / sizeof(processSize[0]); 
    // FirstFit Algorithm
    firstFit(blockSize, m, processSize, n); 
    cout<<"\n";
    // BestFit Algorithm
    bestFit(blockSize, m, processSize, n); 
    cout<<"\n";
    // WorstFit Algorithm
    worstFit(blockSize, m, processSize, n); 
    cout<<"\n";
    return 0 ; 
} 
