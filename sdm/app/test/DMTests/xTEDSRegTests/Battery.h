#ifndef _BATTERY_XTEDS_H
#define _BATTERY_XTEDS_H

#define _STRING_BATTERY_XTEDS \
"<?xml version=\"1.0\" encoding=\"utf-8\" ?>" \
"<xTEDS xmlns=\"http://www.interfacecontrol.com/SPA/xTEDS\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"" \
"xsi:schemaLocation=\"http://www.interfacecontrol.com/SPA/xTEDS ../Schema/xTEDS02.xsd\" name=\"Battery_XTEDS\"" \
"version=\"2.0\">" \
"<Device name=\"Battery\" kind=\"bat\" description=\"power storage device\" >" \
"<Qualifier name=\"Manufacturer\" value=\"DNetConceptBattery\"/>" \
"<Qualifier name=\"Model\" value=\"1.2.3\"/>" \
"<Qualifier name=\"SerialNumber\" value=\"90210\"/>" \
"</Device>" \
"" \
"<Interface name=\"BatteryBasicInterface\" id=\"1\">" \
"<Qualifier name=\"Chemistry\" value=\"LIon\"/>" \
"<Qualifier name=\"Capacity\" value=\"30.0\" units=\"Amp-Hours\"/>" \
"<Qualifier name=\"DepthOfDischargeLoWarn\" value=\"20.0\" units=\"percent\"/>" \
"<Qualifier name=\"DepthOfDischargeLoKeepout\" value=\"10.0\" units=\"percent\"/>" \
"<Qualifier name=\"CycleLimit\" value=\"500\" units=\"cycles\"/>" \
"<Variable name=\"BatSOC\" kind=\"dischargeFraction\" format=\"FLOAT32\" units=\"percent\" description=\"percent of capacity discharged\" />" \
"<Variable name=\"BatTemp\" kind=\"temperature\" format=\"FLOAT32\" units=\"degC\" description=\"ambient temperature inside battery\" />" \
"<Variable name=\"BatCycleCount\" kind=\"count\" format=\"INT16\" units=\"counts\" description=\"count of discharge/recharge cycles the device has experienced\" />" \
"<Variable name=\"BatCurrent\" kind=\"electricalCurrent\" format=\"FLOAT32\" units=\"A\" description=\"charging is positive; discharging is negative\" />" \
"<Variable name=\"BatUnregVoltage\" kind=\"voltage\" format=\"FLOAT32\" units=\"V\" description=\"voltage at battery terminals\" />" \
"<Variable name=\"CurrentLimitIn\" kind=\"electricalCurrent\" format=\"FLOAT32\" units=\"A\" description=\"Limit on current flowing into battery\" />" \
"<Variable name=\"CurrentLimitOut\" kind=\"electricalCurrent\" format=\"FLOAT32\" units=\"A\" description=\"Limit on current flowing out of battery\" />" \
"<Variable name=\"BatteryState\" kind=\"mode\" format=\"UINT08\" >" \
"<Drange name=\"BatteryStateEnum\" >" \
"<Option name=\"Offline\" value=\"0\"/>" \
"<Option name=\"Online\" value=\"1\"/>" \
"<Option name=\"Calibrate\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"" \
"<Notification>" \
"<DataMsg name=\"BatSOH\" description=\"state of health\" id=\"1\" msgArrival=\"PERIODIC\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"BatteryState\" />" \
"<VariableRef name=\"BatSOC\" />" \
"<VariableRef name=\"BatTemp\" />" \
"<VariableRef name=\"BatCycleCount\" />" \
"<VariableRef name=\"BatCurrent\" />" \
"<VariableRef name=\"BatUnregVoltage\" />" \
"</DataMsg>" \
"</Notification>" \
"" \
"<Command>" \
"<CommandMsg id=\"2\" name=\"SetCurrentLimitIn\">" \
"<VariableRef name=\"CurrentLimitIn\"/>" \
"</CommandMsg>" \
"</Command>" \
"" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"SetCurrentLimitOut\">" \
"<VariableRef name=\"CurrentLimitOut\"/>" \
"</CommandMsg>" \
"</Command>" \
"" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"SetBatteryState\">" \
"<VariableRef name=\"BatteryState\"/>" \
"</CommandMsg>" \
"</Command>" \
"</Interface>" \
"" \
"<Interface name=\"CmpSafety\" id=\"3\">" \
"<Qualifier name=\"TemperatureLoKeepout\" value=\"-20.0\" units=\"degC\"/>" \
"<Qualifier name=\"TemperatureLoWarning\" value=\"-10.0\" units=\"degC\"/>" \
"<Qualifier name=\"TemperatureHiWarning\" value=\"50.0\" units=\"degC\"/>" \
"<Qualifier name=\"TemperatureHiKeepout\" value=\"60.0\" units=\"degC\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"DeviceTemperature\" kind=\"temperature\" format=\"FLOAT32\" units=\"degC\" />" \
"<Request>" \
"<CommandMsg name=\"GetDeviceTemperature\" id=\"1\" />" \
"<DataReplyMsg name=\"DeviceTempReply\" id=\"2\">" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"DeviceTemperature\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"<Notification>" \
"<DataMsg name=\"DeviceTemp\" id=\"3\" msgArrival=\"PERIODIC\" msgRate=\"1\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"DeviceTemperature\"/>" \
"</DataMsg>" \
"</Notification>" \
"</Interface>" \
"" \
"</xTEDS>" \
""

#endif
