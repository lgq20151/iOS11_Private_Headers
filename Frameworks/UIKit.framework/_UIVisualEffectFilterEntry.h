/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable> {
    CAFilter * _filter;
    double  _identityScaleHint;
    NSDictionary * _identityValues;
    double  _requestedScaleHint;
    NSDictionary * _requestedValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic) double identityScaleHint;
@property (nonatomic, copy) NSDictionary *identityValues;
@property (nonatomic) double requestedScaleHint;
@property (nonatomic, copy) NSDictionary *requestedValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)filter;
- (double)identityScaleHint;
- (id)identityValues;
- (id)initWithFilter:(id)arg1 requestedValues:(id)arg2 identityValues:(id)arg3;
- (bool)isSameTypeOfEffect:(id)arg1;
- (double)requestedScaleHint;
- (id)requestedValues;
- (double)scaleHintAsRequested:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setIdentityScaleHint:(double)arg1;
- (void)setIdentityValues:(id)arg1;
- (void)setRequestedScaleHint:(double)arg1;
- (void)setRequestedValues:(id)arg1;
- (id)valueAsRequested:(bool)arg1;

@end
