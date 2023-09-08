#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& nums, int left, int right) {
  if (left >= right) {
    return;
  }

  int pivot = nums[left + (right - left) / 2];
  int i = left, j = right;
  while (i <= j) {
    while (nums[i] < pivot) {
      i++;
    }
    while (nums[j] > pivot) {
      j--;
    }
    if (i <= j) {
      swap(nums[i], nums[j]);
      i++;
      j--;
    }
  }

  quickSort(nums, left, j);
  quickSort(nums, i, right);
}

int main() {
  vector<int> nums = {10, 7, 8, 9, 1, 5};
  quickSort(nums, 0, nums.size() - 1);
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}