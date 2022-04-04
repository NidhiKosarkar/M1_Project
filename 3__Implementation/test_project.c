#include "unity.h"

extern void test_project();
void setup(void)
{

}
void tearDown(void)
{


}
int main(void)
{
    UnityBegin(void);
    RUN_TEST(test_project);
    return (UnityEnd());
}