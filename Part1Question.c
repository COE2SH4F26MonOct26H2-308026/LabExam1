/* Question: Sum of squares
 * Compute 1 squared plus 2 squared through n squared. For n = 0 return 0. Domain: 0 <= n <= 100.
 * Complete only solve; write the answer to global result.
 * Use 10-20 nonblank code lines, excluding brace-only lines.
 */
#include <stdio.h>

long result;

void solve(long n)
{
    /* TODO: implement solve here. */
}

int main(void)
{
    int passed;
    passed = 0;
    result = -999999L;
    solve(0L);
    if (result == 0L) {
        passed = passed + 1;
        printf("Test 1: PASS\n");
    } else {
        printf("Test 1: FAIL (expected %ld, got %ld)\n", 0L, result);
    }
    result = -999999L;
    solve(1L);
    if (result == 1L) {
        passed = passed + 1;
        printf("Test 2: PASS\n");
    } else {
        printf("Test 2: FAIL (expected %ld, got %ld)\n", 1L, result);
    }
    result = -999999L;
    solve(3L);
    if (result == 14L) {
        passed = passed + 1;
        printf("Test 3: PASS\n");
    } else {
        printf("Test 3: FAIL (expected %ld, got %ld)\n", 14L, result);
    }
    result = -999999L;
    solve(5L);
    if (result == 55L) {
        passed = passed + 1;
        printf("Test 4: PASS\n");
    } else {
        printf("Test 4: FAIL (expected %ld, got %ld)\n", 55L, result);
    }
    result = -999999L;
    solve(10L);
    if (result == 385L) {
        passed = passed + 1;
        printf("Test 5: PASS\n");
    } else {
        printf("Test 5: FAIL (expected %ld, got %ld)\n", 385L, result);
    }
    printf("Passed %d of 5 test cases (%d%%)\n", passed, passed * 20);
    return passed == 5 ? 0 : 1;
}
