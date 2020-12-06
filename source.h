#ifndef SOURCE_H
#define SOURCE_H

#include <vector>
#include "request.h"

namespace Skudar {
class Source{
public:
    Source();
    Source(float alpha, float beta, int sourcesAmount);

    Skudar::Request getNextRequest();

private:
    float alpha;
    float beta;
    int sourcesAmount;

    float *timesToWait;
    int *requestNumbers;

    void fillTimesToWait();
    std::pair<int, float> getMinTimeAndIndex();
    void removeMinTimeToWait();
};
}

#endif // SOURCE_H
