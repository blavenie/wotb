#ifndef DISTANCE_RESULT_H
#define DISTANCE_RESULT_H

namespace libwot {

  struct DistanceResult {
    int32_t nbSentries;
    int32_t nbSuccess;
    bool isOutdistanced;
  };
}

#endif
