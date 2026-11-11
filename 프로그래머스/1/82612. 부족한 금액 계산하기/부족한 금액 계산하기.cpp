using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total = (long long)price * count * (count + 1) / 2;
    long long diff = total - money;

    if (diff > 0) {
        answer = diff;
    } else {
        answer = 0;
    }

    return answer;
}