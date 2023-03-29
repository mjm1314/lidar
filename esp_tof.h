
// Time of Flight Include Files

#include "vl53l4cx_class.h"
#include "vl53l4cx_types.h"
#include "vl53l4cx_preset_setup.h"
#include "vl53l4cx_dmax_private_structs.h"
#include "vl53l4cx_dmax_structs.h"
#include "vl53l4cx_error_exceptions.h"
#include "vl53l4cx_hist_map.h"
#include "vl53l4cx_hist_private_structs.h"
#include "vl53l4cx_hist_structs.h"
#include "vl53l4cx_ll_def.h"
#include "vl53l4cx_ll_device.h"
#include "vl53l4cx_nvm_map.h"
#include "vl53l4cx_nvm_structs.h"
#include "vl53l4cx_platform_user_data.h"
#include "vl53l4cx_platform_user_defines.h"
#include "vl53l4cx_register_map.h"
#include "vl53l4cx_register_settings.h"
#include "vl53l4cx_register_structs.h"
#include "vl53l4cx_tuning_parm_defaults.h"
#include "vl53l4cx_xtalk_private_structs.h"
#include "vl53l4cx_error_codes.h"
#include "vl53l4cx_platform_user_config.h"
#include "vl53l4cx_platform_user_defines.h"
#include "vl53l4cx_def.h"
#include "vl53l4cx_class.cpp"

void tof_loop();
void tof_setup();
