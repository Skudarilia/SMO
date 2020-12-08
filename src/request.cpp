#include "request.h"

Skudar::Request::Request()
{
    this->timeOfWait = 0.0;
    this->sourceId = 0;
    this->requestNumber = 0;
}

Skudar::Request::Request(float timeOfWait, int sourceId, int requestNumber)
{
    this->timeOfWait = timeOfWait; // время
    this->sourceId = sourceId; // номер источника 
    this->requestNumber = requestNumber; // номер заявки
}

float Skudar::Request::getTimeOfWait() const
{
    return timeOfWait;
}

int Skudar::Request::getSourceId() const
{
    return sourceId;
}

int Skudar::Request::getRequestNumber() const
{
    return requestNumber;
}

void Skudar::Request::setTimeOfWait(float value)
{
    timeOfWait = value;
}
