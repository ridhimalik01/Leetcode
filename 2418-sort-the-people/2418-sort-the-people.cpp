class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        quickSort(heights, names, 0, heights.size() - 1);
        return names;
    }

private:
    void swap(vector<int>& heights, vector<string>& names, int index1,
              int index2) {
        int tempHeight = heights[index1];
        heights[index1] = heights[index2];
        heights[index2] = tempHeight;

        string tempName = names[index1];
        names[index1] = names[index2];
        names[index2] = tempName;
    }

    int partition(vector<int>& heights, vector<string>& names, int start,
                  int end) {
        int pivot = heights[end];
        int i = start - 1;

        for (int j = start; j < end; j++) {
            if (heights[j] >= pivot) {
                i++;
                swap(heights, names, i, j);
            }
        }
        swap(heights, names, i + 1, end);
        return i + 1;
    }

    void quickSort(vector<int>& heights, vector<string>& names, int start,
                   int end) {
        if (start < end) {
            int partitionIndex = partition(heights, names, start, end);

            quickSort(heights, names, start, partitionIndex - 1);
            quickSort(heights, names, partitionIndex + 1, end);
        }
    }
};