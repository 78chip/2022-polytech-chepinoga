#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "queue.h"
#include <doctest.h>

TEST_CASE("sheeesh") 
{

  Queue q;

  q.enqueue(2);
  q.enqueue(3);
  q.dequeue();
  q.dequeue();
  q.enqueue(34);
  q.enqueue(13);
  q.enqueue(99);
  q.dequeue();
  CHECK((q.front)->data == 4);
  CHECK((q.rear)->data == 5);
}
