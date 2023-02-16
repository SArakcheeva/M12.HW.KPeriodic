/* �������� ������� IsKPeriodic, ������� ���������, �������� �� ������ ������� ����� K.
 * ��������� � ������������� ������ ������ K ��������(K ������ ���� ������ 0).
 * ��������, abcabcabcabc ����� ��������� 3, ��� ��� ��� ������� �� �������� abc, ������� ����� 3.
 */
#include <string>

int KMPSearch(const std::string& pat, const std::string& txt);


bool isKPeriodic(const std::string txt, int k)
{
    int size_txt = txt.size();
    if (size_txt % k == 0) {
        const std::string pat = txt.substr(0, k);
        int count_pat = KMPSearch(pat, txt);

        if (size_txt / k == count_pat) {
            std::string txt_ = "";
            for (int i = 0; i < count_pat; i++) {
                txt_ += pat;
            }
            if (txt == txt_) {
                return true;
            }
        }
    }
    return false;
}