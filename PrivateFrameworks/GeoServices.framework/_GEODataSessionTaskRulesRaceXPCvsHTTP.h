/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODataSessionTaskRulesRaceXPCvsHTTP : _GEODataSessionTaskRulesHelper {
    int  _requestKind;
    bool  _xpcTaskDidComplete;
    double  _xpcTaskStartTime;
}

- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;

@end