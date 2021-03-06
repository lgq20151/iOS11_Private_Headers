/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLWarningRecorder : NSObject <CVMLWarningRecorder> {
    NSMutableDictionary * _warnings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasWarnings;
- (id)init;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)valueForWarning:(id)arg1;
- (id)warnings;

@end
