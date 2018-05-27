/*****************************************************************************

  Licensed to Accellera Systems Initiative Inc. (Accellera) under one or
  more contributor license agreements.  See the NOTICE file distributed
  with this work for additional information regarding copyright ownership.
  Accellera licenses this file to you under the Apache License, Version 2.0
  (the "License"); you may not use this file except in compliance with the
  License.  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
  implied.  See the License for the specific language governing
  permissions and limitations under the License.

 ****************************************************************************/

/**
 *  @file   testbench.cpp
 *  @brief  
 *  @author A. Nizamudheen, TI
 */

#include "ex02_simple_ip.h"
#include "ex02_config_ip.h"
#include <cci_utils/broker.h>

/**
 *  @fn     int sc_main(int argc, char* argv[])
 *  @brief  Testbench for the CCI ex2_fully_supported_data_type_param example
 *  @param  argc  An integer for the number of input arguments
 *  @param  argv  A a list of the input arguments
 *  @return an integer representing whether the execution was successful
 */
int sc_main(int argc, char *argv[]) {
  cci::cci_register_broker(new cci_utils::broker("My Global Broker"));
  ex02_simple_ip sim_ip("sim_ip");
  ex02_config_ip cfg_ip("cfg_ip");

  SC_REPORT_INFO("sc_main", "Begin Simulation.");
  sc_core::sc_start();
  SC_REPORT_INFO("sc_main", "End Simulation.");

  return EXIT_SUCCESS;
}