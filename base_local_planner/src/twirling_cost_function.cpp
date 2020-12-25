/*
 * twirling_cost_function.cpp
 *
 *  Created on: Apr 20, 2016
 *      Author: Morgan Quigley
 */

#include <base_local_planner/twirling_cost_function.h>

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

namespace base_local_planner {

    double TwirlingCostFunction::scoreTrajectory(Trajectory &traj) {
        printf("TwirlingCostFunction::scoreTrajectory");
        return fabs(traj.thetav_);  // add cost for making the robot spin
    }

} /* namespace base_local_planner */
