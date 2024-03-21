#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(string card_in_hand, string s1, string s2, string s3, string s4, string s5) {
    char table_card_rank = card_in_hand[0];
    char table_card_suit = card_in_hand[1];

    bool can_play = false;

    for (string card : {s1, s2, s3, s4, s5}) {
        if (card[0] == table_card_rank || card[1] == table_card_suit) {
            can_play = true;
            break;
        }
    }

    if (can_play) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    string card_in_hand;
    cin >> card_in_hand;
    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    solve(card_in_hand, s1, s2, s3, s4, s5);
    return 0;
}
