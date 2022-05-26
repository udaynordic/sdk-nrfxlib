/*
 * ZBOSS Zigbee 3.0
 *
 * Copyright (c) 2012-2022 DSR Corporation, Denver CO, USA.
 * www.dsr-zboss.com
 * www.dsr-corporation.com
 * All rights reserved.
 *
 *
 * Use in source and binary forms, redistribution in binary form only, with
 * or without modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 2. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 3. This software, with or without modification, must only be used with a Nordic
 *    Semiconductor ASA integrated circuit.
 *
 * 4. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/* PURPOSE: ZCL8 clusters wrappers
*/
#ifndef ZBOSS_API_ZCL8_H
#define ZBOSS_API_ZCL8_H 1

/* Alarms cluster ZCL8 definitions */
#define ZB_ZCL_ALARMS_SEND_RESET_ALARM_REQ_ZCL8                             ZB_ZCL_ALARMS_SEND_RESET_ALARM_REQ
#define ZB_ZCL_ALARMS_SEND_RESET_ALL_ALARMS_REQ_ZCL8                        ZB_ZCL_ALARMS_SEND_RESET_ALL_ALARMS_REQ
#define ZB_ZCL_ALARMS_SEND_RESET_ALARM_LOG_REQ_ZCL8                         ZB_ZCL_ALARMS_SEND_RESET_ALARM_LOG_REQ

/* ZCL Basic Cluster ZCL8 definitions */
#define ZB_ZCL_BASIC_SEND_RESET_REQ_ZCL8                                    ZB_ZCL_BASIC_SEND_RESET_REQ

/* Door Lock cluster ZCL8 definitions */
#define ZB_ZCL_DOOR_LOCK_SEND_LOCK_DOOR_REQ_ZCL8                            ZB_ZCL_DOOR_LOCK_SEND_LOCK_DOOR_REQ
#define ZB_ZCL_DOOR_LOCK_SEND_UNLOCK_DOOR_REQ_ZCL8                          ZB_ZCL_DOOR_LOCK_SEND_UNLOCK_DOOR_REQ

/* Groups cluster ZCL8 definitions */
#define ZB_ZCL_GROUPS_SEND_ADD_GROUP_REQ_ZCL8                               ZB_ZCL_GROUPS_SEND_ADD_GROUP_REQ
#define ZB_ZCL_GROUPS_SEND_VIEW_GROUP_REQ_ZCL8                              ZB_ZCL_GROUPS_SEND_VIEW_GROUP_REQ
#define ZB_ZCL_GROUPS_SEND_GET_GROUP_MEMBERSHIP_REQ_ZCL8                    ZB_ZCL_GROUPS_SEND_GET_GROUP_MEMBERSHIP_REQ
#define ZB_ZCL_GROUPS_SEND_REMOVE_GROUP_REQ_ZCL8                            ZB_ZCL_GROUPS_SEND_REMOVE_GROUP_REQ
#define ZB_ZCL_GROUPS_SEND_REMOVE_ALL_GROUPS_REQ_ZCL8                       ZB_ZCL_GROUPS_SEND_REMOVE_ALL_GROUPS_REQ
#define ZB_ZCL_GROUPS_SEND_ADD_GROUP_IF_IDENT_REQ_ZCL8                      ZB_ZCL_GROUPS_SEND_ADD_GROUP_IF_IDENT_REQ

/* IAS Ace cluster ZCL8 definitions */
#define ZB_ZCL_IAS_ACE_SEND_ARM_REQ_ZCL8                                    ZB_ZCL_IAS_ACE_SEND_ARM_REQ
#define ZB_ZCL_IAS_ACE_SEND_EMERGENCY_REQ_ZCL8                              ZB_ZCL_IAS_ACE_SEND_EMERGENCY_REQ
#define ZB_ZCL_IAS_ACE_SEND_FIRE_REQ_ZCL8                                   ZB_ZCL_IAS_ACE_SEND_FIRE_REQ
#define ZB_ZCL_IAS_ACE_SEND_PANIC_REQ_ZCL8                                  ZB_ZCL_IAS_ACE_SEND_PANIC_REQ
#define ZB_ZCL_IAS_ACE_SEND_GET_ZONE_ID_MAP_REQ_ZCL8                        ZB_ZCL_IAS_ACE_SEND_GET_ZONE_ID_MAP_REQ
#define ZB_ZCL_IAS_ACE_SEND_GET_ZONE_INFO_REQ_ZCL8                          ZB_ZCL_IAS_ACE_SEND_GET_ZONE_INFO_REQ
#define ZB_ZCL_IAS_ACE_SEND_GET_PANEL_STATUS_REQ_ZCL8                       ZB_ZCL_IAS_ACE_SEND_GET_PANEL_STATUS_REQ
#define ZB_ZCL_IAS_ACE_SEND_GET_BYPASSED_ZONE_LIST_REQ_ZCL8                 ZB_ZCL_IAS_ACE_SEND_GET_BYPASSED_ZONE_LIST_REQ
#define ZB_ZCL_IAS_ACE_SEND_GET_ZONE_STATUS_REQ_ZCL8                        ZB_ZCL_IAS_ACE_SEND_GET_ZONE_STATUS_REQ
#define ZB_ZCL_IAS_ACE_SEND_ZONE_STATUS_CHANGED_REQ_ZCL8                    ZB_ZCL_IAS_ACE_SEND_ZONE_STATUS_CHANGED_REQ
#define ZB_ZCL_IAS_ACE_SEND_PANEL_STATUS_CHANGED_REQ_ZCL8                   ZB_ZCL_IAS_ACE_SEND_PANEL_STATUS_CHANGED_REQ
#define ZB_ZCL_IAS_ACE_SEND_SET_BYPASSED_ZONE_LIST_START_REQ_ZCL8           ZB_ZCL_IAS_ACE_SEND_SET_BYPASSED_ZONE_LIST_START_REQ

/* IAS WD cluster ZCL8 definitions */
#define ZB_ZCL_IAS_WD_SEND_START_WARNING_REQ_ZCL8                           ZB_ZCL_IAS_WD_SEND_START_WARNING_REQ
#define ZB_ZCL_IAS_WD_SEND_SQUAWK_REQ_ZCL8                                  ZB_ZCL_IAS_WD_SEND_SQUAWK_REQ

/* IAS Zone cluster ZCL8 definitions */
#define ZB_ZCL_IAS_ZONE_SEND_INITIATE_TEST_MODE_REQ_ZCL8                    ZB_ZCL_IAS_ZONE_SEND_INITIATE_TEST_MODE_REQ
#define ZB_ZCL_IAS_ZONE_SEND_INITIATE_NORMAL_OPERATION_MODE_REQ_ZCL8        ZB_ZCL_IAS_ZONE_SEND_INITIATE_NORMAL_OPERATION_MODE_REQ
#define ZB_ZCL_IAS_ZONE_SEND_ZONE_ENROLL_REQUEST_REQ_ZCL8                   ZB_ZCL_IAS_ZONE_SEND_ZONE_ENROLL_REQUEST_REQ
#define ZB_ZCL_IAS_ZONE_SEND_STATUS_CHANGE_NOTIFICATION_REQ_ZCL8            ZB_ZCL_IAS_ZONE_SEND_STATUS_CHANGE_NOTIFICATION_REQ
#define ZB_ZCL_IAS_ZONE_SEND_STATUS_CHANGE_NOTIFICATION_HA_REQ_ZCL8         ZB_ZCL_IAS_ZONE_SEND_STATUS_CHANGE_NOTIFICATION_HA_REQ

/* Identify cluster ZCL8 definitions */
#define ZB_ZCL_IDENTIFY_SEND_TRIGGER_VARIANT_REQ_ZCL8                       ZB_ZCL_IDENTIFY_SEND_TRIGGER_VARIANT_REQ
#define ZB_ZCL_IDENTIFY_SEND_IDENTIFY_REQ_ZCL8                              ZB_ZCL_IDENTIFY_SEND_IDENTIFY_REQ
#define ZB_ZCL_IDENTIFY_SEND_IDENTIFY_QUERY_REQ_ZCL8                        ZB_ZCL_IDENTIFY_SEND_IDENTIFY_QUERY_REQ

/* On/Off cluster ZCL8 definitions */
#define ZB_ZCL_ON_OFF_SEND_OFF_REQ_ZCL8                                     ZB_ZCL_ON_OFF_SEND_OFF_REQ
#define ZB_ZCL_ON_OFF_SEND_ON_REQ_ZCL8                                      ZB_ZCL_ON_OFF_SEND_ON_REQ
#define ZB_ZCL_ON_OFF_SEND_TOGGLE_REQ_ZCL8                                  ZB_ZCL_ON_OFF_SEND_TOGGLE_REQ
#define ZB_ZCL_ON_OFF_SEND_OFF_WITH_EFFECT_REQ_ZCL8                         ZB_ZCL_ON_OFF_SEND_OFF_WITH_EFFECT_REQ
#define ZB_ZCL_ON_OFF_SEND_ON_WITH_RECALL_GLOBAL_SCENE_REQ_ZCL8             ZB_ZCL_ON_OFF_SEND_ON_WITH_RECALL_GLOBAL_SCENE_REQ
#define ZB_ZCL_ON_OFF_SEND_REQ_ZCL8                                         ZB_ZCL_ON_OFF_SEND_REQ
#define ZB_ZCL_ON_OFF_SEND_ON_WITH_TIMED_OFF_REQ_ZCL8                       ZB_ZCL_ON_OFF_SEND_ON_WITH_TIMED_OFF_REQ

/* OTA Upgrade cluster ZCL8 definitions */
#define ZB_ZCL_OTA_UPGRADE_SEND_QUERY_NEXT_IMAGE_REQ_ZCL8                   ZB_ZCL_OTA_UPGRADE_SEND_QUERY_NEXT_IMAGE_REQ
#define ZB_ZCL_OTA_UPGRADE_SEND_IMAGE_BLOCK_REQ_ZCL8                        ZB_ZCL_OTA_UPGRADE_SEND_IMAGE_BLOCK_REQ
#define ZB_ZCL_OTA_UPGRADE_SEND_IMAGE_PAGE_REQ_ZCL8                         ZB_ZCL_OTA_UPGRADE_SEND_IMAGE_PAGE_REQ
#define ZB_ZCL_OTA_UPGRADE_SEND_UPGRADE_END_REQ_ZCL8                        ZB_ZCL_OTA_UPGRADE_SEND_UPGRADE_END_REQ
#define ZB_ZCL_OTA_UPGRADE_SEND_QUERY_SPECIFIC_FILE_REQ_ZCL8                ZB_ZCL_OTA_UPGRADE_SEND_QUERY_SPECIFIC_FILE_REQ
#define ZB_ZCL_OTA_UPGRADE_SEND_IMAGE_NOTIFY_REQ_ZCL8                       ZB_ZCL_OTA_UPGRADE_SEND_IMAGE_NOTIFY_REQ

/* Poll Control cluster ZCL8 definitions */
#define ZB_ZCL_POLL_CONTROL_SEND_CHECK_IN_REQ_ZCL8                          ZB_ZCL_POLL_CONTROL_SEND_CHECK_IN_REQ
#define ZB_ZCL_POLL_CONTROL_SEND_FAST_POLL_STOP_REQ_ZCL8                    ZB_ZCL_POLL_CONTROL_SEND_FAST_POLL_STOP_REQ
#define ZB_ZCL_POLL_CONTROL_SEND_SET_LONG_POLL_INTERVAL_REQ_ZCL8            ZB_ZCL_POLL_CONTROL_SEND_SET_LONG_POLL_INTERVAL_REQ
#define ZB_ZCL_POLL_CONTROL_SEND_SET_SHORT_POLL_INTERVAL_REQ_ZCL8           ZB_ZCL_POLL_CONTROL_SEND_SET_SHORT_POLL_INTERVAL_REQ

/* Scenes cluster ZCL8 definitions */
#define ZB_ZCL_SCENES_SEND_ADD_SCENE_REQ_ZCL8                               ZB_ZCL_SCENES_SEND_ADD_SCENE_REQ
#define ZB_ZCL_SCENES_SEND_VIEW_SCENE_REQ_ZCL8                              ZB_ZCL_SCENES_SEND_VIEW_SCENE_REQ
#define ZB_ZCL_SCENES_SEND_REMOVE_SCENE_REQ_ZCL8                            ZB_ZCL_SCENES_SEND_REMOVE_SCENE_REQ
#define ZB_ZCL_SCENES_SEND_REMOVE_ALL_SCENES_REQ_ZCL8                       ZB_ZCL_SCENES_SEND_REMOVE_ALL_SCENES_REQ
#define ZB_ZCL_SCENES_SEND_STORE_SCENE_REQ_ZCL8                             ZB_ZCL_SCENES_SEND_STORE_SCENE_REQ
#define ZB_ZCL_SCENES_SEND_GET_SCENE_MEMBERSHIP_REQ_ZCL8                    ZB_ZCL_SCENES_SEND_GET_SCENE_MEMBERSHIP_REQ

/* Thermostat cluster ZCL8 definitions */
#define ZB_ZCL_THERMOSTAT_SEND_SETPOINT_RAISE_LOWER_REQ_ZCL8                ZB_ZCL_THERMOSTAT_SEND_SETPOINT_RAISE_LOWER_REQ
#define ZB_ZCL_THERMOSTAT_SEND_SET_WEEKLY_SCHEDULE_REQ_ZCL8                 ZB_ZCL_THERMOSTAT_SEND_SET_WEEKLY_SCHEDULE_REQ
#define ZB_ZCL_THERMOSTAT_SEND_GET_WEEKLY_SCHEDULE_REQ_ZCL8                 ZB_ZCL_THERMOSTAT_SEND_GET_WEEKLY_SCHEDULE_REQ
#define ZB_ZCL_THERMOSTAT_SEND_CLEAR_WEEKLY_SCHEDULE_REQ_ZCL8               ZB_ZCL_THERMOSTAT_SEND_CLEAR_WEEKLY_SCHEDULE_REQ
#define ZB_ZCL_THERMOSTAT_SEND_GET_RELAY_STATUS_LOG_REQ_ZCL8                ZB_ZCL_THERMOSTAT_SEND_GET_RELAY_STATUS_LOG_REQ

/* ZBOSS specific Tunnel cluster ZCL8 definitions, purpose: general data tunneling. */
#define ZB_ZCL_TUNNEL_SEND_TRANSFER_REQ_ZCL8                                ZB_ZCL_TUNNEL_SEND_TRANSFER_REQ

/* Window Covering cluster ZCL8 definitions */
#define ZB_ZCL_WINDOW_COVERING_SEND_UP_OPEN_REQ_ZCL8                        ZB_ZCL_WINDOW_COVERING_SEND_UP_OPEN_REQ
#define ZB_ZCL_WINDOW_COVERING_SEND_DOWN_CLOSE_REQ_ZCL8                     ZB_ZCL_WINDOW_COVERING_SEND_DOWN_CLOSE_REQ
#define ZB_ZCL_WINDOW_COVERING_SEND_STOP_REQ_ZCL8                           ZB_ZCL_WINDOW_COVERING_SEND_STOP_REQ
#define ZB_ZCL_WINDOW_COVERING_SEND_GO_TO_LIFT_PERCENTAGE_REQ_ZCL8          ZB_ZCL_WINDOW_COVERING_SEND_GO_TO_LIFT_PERCENTAGE_REQ
#define ZB_ZCL_WINDOW_COVERING_SEND_GO_TO_TILT_PERCENTAGE_REQ_ZCL8          ZB_ZCL_WINDOW_COVERING_SEND_GO_TO_TILT_PERCENTAGE_REQ

/* Demand Response and Load Control cluster definitions */
#define ZB_ZCL_DRLC_SEND_CMD_GET_SCHEDULED_EVENTS_ZCL8                      ZB_ZCL_DRLC_SEND_CMD_GET_SCHEDULED_EVENTS

#endif /* ZBOSS_API_ZCL8_H */