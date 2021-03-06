#ifndef _IMESA_XTEDS_H
#define _IMESA_XTEDS_H

#define _STRING_IMESA_XTEDS \
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>" \
"<xTEDS xmlns=\"http://www.interfacecontrol.com/SPA/xTEDS\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"" \
"xsi:schemaLocation=\"http://www.interfacecontrol.com/SPA/xTEDS ../Schema/xTEDS02.xsd\" name=\"iMESA_data_sheet\" version=\"2.0\">" \
"<Device name=\"iMESA\" kind=\"ElectrostaticAnalyzer\" description=\"intelligent Miniature Electrostatic Analyzer\" manufacturerId=\"Air_Force_Academy\" modelId=\"iMESA\" />" \
"" \
"<Interface name=\"iMESA_data\" id=\"1\">" \
"<!-- Timestamp -->" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\"/>" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" format=\"UINT32\" units=\"Counts\" scaleFactor=\".0001\" scaleUnits=\"Seconds\"/>" \
"" \
"<!-- Data Definitions -->" \
"" \
"<!-- Flow Energy -->" \
"<Variable name=\"FlowEnergy\" kind=\"Energy\" description=\"Plasma Flow Energy\" format=\"FLOAT32\" length=\"1\" units=\"eV\"/>" \
"" \
"<!-- Temperature -->" \
"<Variable name=\"Temperature\" kind=\"Energy\" description=\"Plasma Flow Temperature\" format=\"FLOAT32\" length=\"1\" units=\"eV\"/>" \
"" \
"<!-- Temperature -->" \
"<Variable name=\"Density\" kind=\"Density\" description=\"Plasma Density\" format=\"FLOAT32\" length=\"1\" units=\"cm^-3\"/>" \
"" \
"<!-- Data Messages -->" \
"<Notification>" \
"<DataMsg name=\"ProcessedDataStream\" description=\"iMESA Processed Data\" msgArrival=\"EVENT\" id=\"1\">" \
"<VariableRef name=\"SubS\"/>" \
"<VariableRef name=\"Time\"/>" \
"<VariableRef name=\"FlowEnergy\"/>" \
"<VariableRef name=\"Temperature\"/>" \
"<VariableRef name=\"Density\"/>" \
"</DataMsg>" \
"</Notification>" \
"" \
"<!-- Data Reply Messages -->" \
"<Request>" \
"<CommandMsg name=\"GetProcessedData\" description=\"Query Processed Data\" id=\"2\" />" \
"<DataReplyMsg name=\"ProcessedData\" description=\"iMESA Processed Data Once\" id=\"3\" >" \
"<VariableRef name=\"SubS\"/>" \
"<VariableRef name=\"Time\"/>" \
"<VariableRef name=\"FlowEnergy\"/>" \
"<VariableRef name=\"Temperature\"/>" \
"<VariableRef name=\"Density\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"</Interface>" \
"" \
"<Interface name=\"DevPwr\" id=\"2\">" \
"<Qualifier name=\"CurrentLoKeepout\" value=\"0.0\" units=\"A\"/>" \
"<Qualifier name=\"CurrentLoWarning\" value=\"0.0\" units=\"A\"/>" \
"<Qualifier name=\"CurrentHiWarning\" value=\"3.5\" units=\"A\"/>" \
"<Qualifier name=\"CurrentHiKeepout\" value=\"3.5\" units=\"A\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"DevPwrState\" kind=\"Power_State\" format=\"UINT08\">" \
"<Drange name=\"DevPwrStateEnum\">" \
"<Option name=\"DevPwrOFF\" value=\"0\" description=\"All power to device is turned off.\" />" \
"<Option name=\"DevPwrON\" value=\"1\" description=\"Device may draw full power.\" />" \
"</Drange>" \
"</Variable>" \
"<Variable name=\"DevPwrStateSet\" kind=\"Power_State\" format=\"UINT08\" id=\"2\">" \
"<Drange name=\"DevPwrStateEnumReference\" description=\"This should be a reference to DevPwrStateEnumeration.\">" \
"<Option name=\"DevPwrOFF\" value=\"0\" description=\"All power to device is turned off.\" />" \
"<Option name=\"DevPwrON\" value=\"1\" description=\"Device may draw full power.\" />" \
"</Drange>" \
"</Variable>" \
"<Variable name=\"modePowers\" kind=\"power\" format=\"FLOAT32\" units=\"W\" length=\"2\" />" \
"<Command>" \
"<CommandMsg name=\"DevPwrSetState\" id=\"1\">" \
"<VariableRef name=\"DevPwrStateSet\" />" \
"</CommandMsg>" \
"<FaultMsg name=\"DevPwrStateNotSet\" id=\"2\">" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"DevPwrState\" />" \
"<VariableRef name=\"DevPwrStateSet\" />" \
"</FaultMsg>" \
"</Command>" \
"<Notification>" \
"<DataMsg name=\"DevPwrHK\" id=\"3\" msgArrival=\"PERIODIC\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"DevPwrState\" />" \
"<VariableRef name=\"DevPwrStateSet\" />" \
"</DataMsg>" \
"</Notification>" \
"<Request>" \
"<CommandMsg name=\"getPowerInMode\" id=\"4\" />" \
"<DataReplyMsg name=\"powerInMode\" id=\"5\">" \
"<VariableRef name=\"modePowers\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"</Interface>" \
"" \
"</xTEDS>" \
""

#endif
