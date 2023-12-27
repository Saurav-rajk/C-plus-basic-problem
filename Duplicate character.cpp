#include<iostream>
#include<algorithm>
using namespace std;

int test(string text) {
    int count = 0;
    sort(text.begin(), text.end());

    for (int i = 0; i < text.size() - 1; i++) {
        if (text[i] == text[i + 1]) {
            count = count + 1;
            // Skip the consecutive of the duplicates eg-if ooo comes at same time it skip it.
            while (i < text.size() - 1 && text[i] == text[i + 1]) {
                i++;
            }
        }
    }
    return count;
}

int main() {
    string t;
    cout << "Enter the string: ";
    getline(cin, t);

    int ans = test(t);
    cout << "Duplicate characters count: " << ans << endl;

    return 0;
}


