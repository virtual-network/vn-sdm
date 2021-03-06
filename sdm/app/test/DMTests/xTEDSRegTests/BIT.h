#ifndef _EXAMPLE_XTEDS_H
#define _EXAMPLE_XTEDS_H

#define _STRING_EXAMPLE_XTEDS \
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>" \
"<xTEDS xmlns=\"http://www.interfacecontrol.com/SPA/xTEDS\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"" \
"xsi:schemaLocation=\"http://www.interfacecontrol.com/SPA/xTEDS ../Schema/xTEDS02.xsd\" name=\"BITxTEDS\" description=\"Built-In Test interface templates\" version=\"0.1\">" \
"" \
"<Application name=\"Example\" kind=\"REFERENCE_ONLY\" description=\"A null application. The purpose of this xTEDS is to define templates for BIT interfaces.\"/>" \
"" \
"<Interface name=\"FunctionalTest\" id=\"1\" description=\"The Functional Built-In Test is a basic functionality test. Typically initiated manually\">" \
"" \
"<Variable name=\"functionalTestResultCode\" kind=\"STATUS\" format=\"UINT08\" description=\"The result of running a Built-In Functional Test\">" \
"<Drange name=\"functionalTestResultCodes\" description=\"An enumeration of all test results\">" \
"<Option value=\"0\" name=\"NOT_EXECUTED\" description=\"The test has not been executed.\"/>" \
"<Option value=\"1\" name=\"SUCCESS\" description=\"The test ran successfully.\"/>" \
"<Option value=\"2\" name=\"FAILURE\" description=\"The test failed.\"/>" \
"<!-- Note: FAILURE is a placeholder for defining specific failures. Typically all diagnosable failures are enumerated. -->" \
"</Drange>" \
"</Variable>" \
"" \
"<Variable kind=\"Time\" name=\"functionalTestSeconds\" format=\"UINT32\" units=\"Seconds\" description=\"Time test was last executed.\"/>" \
"<Variable kind=\"SubSeconds\" name=\"functionalTestSubSeconds\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\"" \
"description=\"Time test was last executed.\"/>" \
"" \
"<Request>" \
"<CommandMsg name=\"runFunctionalTest\" id=\"001\" description=\"Run the Functional BIT and report results.\"/>" \
"<DataReplyMsg name=\"functionalTestResult\" id=\"002\">" \
"<VariableRef name=\"functionalTestResultCode\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"" \
"<Request>" \
"<CommandMsg name=\"getLastFunctionalTestResult\" id=\"003\" description=\"Run the Functional BIT and report results.\"/>" \
"<DataReplyMsg name=\"lastFunctionalTestResult\" id=\"004\">" \
"<VariableRef name=\"functionalTestSeconds\"/>" \
"<VariableRef name=\"functionalTestSubSeconds\"/>" \
"<VariableRef name=\"functionalTestResultCode\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"" \
"<Notification>" \
"<DataMsg name=\"functionalTestResultChange\" id=\"005\" msgArrival=\"EVENT\" description=\"Functional Test result has changed.\">" \
"<VariableRef name=\"functionalTestSeconds\"/>" \
"<VariableRef name=\"functionalTestSubSeconds\"/>" \
"<VariableRef name=\"functionalTestResultCode\"/>" \
"</DataMsg>" \
"</Notification>" \
"" \
"</Interface>" \
"" \
"<Interface id=\"2\" name=\"PerformanceTest\" description=\"The Performance Built-In Test is a more extensive operational test. Typically initiated manually.\">" \
"" \
"<Variable name=\"performanceTestResultCode\" kind=\"STATUS\" format=\"UINT08\" description=\"The result of running a Built-In Performance Test\">" \
"<Drange name=\"performanceTestResultCodes\" description=\"An enumeration of all test results\">" \
"<Option value=\"0\" name=\"NOT_EXECUTED\" description=\"The test has not been executed.\"/>" \
"<Option value=\"1\" name=\"SUCCESS\" description=\"The test ran successfully.\"/>" \
"<Option value=\"2\" name=\"FAILURE\" description=\"The test failed.\"/>" \
"<!-- Note: FAILURE is a placeholder for defining specific failures. Typically all diagnosable failures are enumerated. -->" \
"</Drange>" \
"</Variable>" \
"" \
"<Variable kind=\"Time\" name=\"performanceTestSeconds\" format=\"UINT32\" units=\"Seconds\" description=\"Time test was last executed.\"/>" \
"<Variable kind=\"SubSeconds\" name=\"performanceTestSubSeconds\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\"" \
"description=\"Time test was last executed.\"/>" \
"" \
"<Request>" \
"<CommandMsg name=\"runPerformanceTest\" id=\"001\" description=\"Run the Performance BIT and report results. \"/>" \
"<DataReplyMsg name=\"performanceTestResult\" id=\"002\">" \
"<VariableRef name=\"performanceTestResultCode\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"" \
"<Request>" \
"<CommandMsg name=\"getLastPerformanceTestResult\" id=\"003\" description=\"Run the Performance BIT and report results. \"/>" \
"<DataReplyMsg name=\"lastPerformanceTestResult\" id=\"004\">" \
"<VariableRef name=\"performanceTestSeconds\"/>" \
"<VariableRef name=\"performanceTestSubSeconds\"/>" \
"<VariableRef name=\"performanceTestResultCode\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"" \
"<Notification>" \
"<DataMsg name=\"performanceTestResultChange\" id=\"005\" msgArrival=\"EVENT\" description=\"Performance Test result has changed.\">" \
"<VariableRef name=\"performanceTestSeconds\"/>" \
"<VariableRef name=\"performanceTestSubSeconds\"/>" \
"<VariableRef name=\"performanceTestResultCode\"/>" \
"</DataMsg>" \
"</Notification>" \
"" \
"</Interface>" \
"" \
"<Interface id=\"3\" name=\"OnOrbitCheckout\" description=\"On-Orbit Checkout verifies operational readiness. Autonomously initiated by OOCE.\">" \
"" \
"<Variable name=\"onOrbitCheckoutResultCode\" kind=\"STATUS\" format=\"UINT08\" description=\"The result of running an On-Orbit Checkout\">" \
"<Drange name=\"onOrbitCheckoutResultCodes\" description=\"An enumeration of all test results\">" \
"<Option value=\"0\" name=\"NOT_EXECUTED\" description=\"The On-Orbit Checkout has not been executed.\"/>" \
"<Option value=\"1\" name=\"SUCCESS\" description=\"The On-Orbit Checkout ran successfully.\"/>" \
"<Option value=\"2\" name=\"FAILURE\" description=\"The On-Orbit Checkout failed.\"/>" \
"<!-- Note: FAILURE is a placeholder for defining specific failures. Typically all diagnosable failures are enumerated. -->" \
"</Drange>" \
"</Variable>" \
"" \
"<Variable kind=\"Time\" name=\"onOrbitCheckoutSeconds\" format=\"UINT32\" units=\"Seconds\" description=\"TimeOn-Orbit Checkout was last executed.\"/>" \
"<Variable kind=\"SubSeconds\" name=\"onOrbitCheckoutSubSeconds\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\"" \
"description=\"Time On-Orbit Checkout was last executed.\"/>" \
"" \
"<Request>" \
"<CommandMsg name=\"runOnOrbitCheckout\" id=\"001\" description=\"Run the On-Orbit Checkout and report results.\"/>" \
"<DataReplyMsg name=\"onOrbitCheckoutResult\" id=\"002\">" \
"<VariableRef name=\"onOrbitCheckoutResultCode\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"" \
"<Request>" \
"<CommandMsg name=\"getLastOnOrbitCheckoutResult\" id=\"003\" description=\"Run the On-Orbit Checkout and report results.\"/>" \
"<DataReplyMsg name=\"lastOnOrbitCheckoutResult\" id=\"004\">" \
"<VariableRef name=\"onOrbitCheckoutSeconds\"/>" \
"<VariableRef name=\"onOrbitCheckoutSubSeconds\"/>" \
"<VariableRef name=\"onOrbitCheckoutResultCode\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"" \
"<Notification>" \
"<DataMsg name=\"onOrbitCheckoutResultChange\" id=\"005\" msgArrival=\"EVENT\" description=\"On-Orbit Checkout result has changed.\">" \
"<VariableRef name=\"onOrbitCheckoutSeconds\"/>" \
"<VariableRef name=\"onOrbitCheckoutSubSeconds\"/>" \
"<VariableRef name=\"onOrbitCheckoutResultCode\"/>" \
"</DataMsg>" \
"</Notification>" \
"" \
"</Interface>" \
"" \
"</xTEDS>" \
""

#endif
