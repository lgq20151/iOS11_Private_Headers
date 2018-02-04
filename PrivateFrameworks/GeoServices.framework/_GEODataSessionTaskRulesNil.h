/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODataSessionTaskRulesNil : NSObject <GEODataSessionTaskRules>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)nilRules;

- (void)addCompletedSubtaskObserver:(id)arg1;
- (id)completedSubtaskForDataTask:(id)arg1;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (id)initForType:(unsigned long long)arg1;
- (void)removeCompletedSubtaskObserver:(id)arg1;

@end