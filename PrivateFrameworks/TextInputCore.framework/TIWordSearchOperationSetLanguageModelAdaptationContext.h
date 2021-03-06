/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation {
    TILanguageModelAdaptationContext * _adaptationContext;
    TIMecabraWrapper * _mecabraWrapper;
}

@property (nonatomic, copy) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, retain) TIMecabraWrapper *mecabraWrapper;

- (id)adaptationContext;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2;
- (id)mecabraWrapper;
- (void)perform;
- (void)setAdaptationContext:(id)arg1;
- (void)setMecabraWrapper:(id)arg1;

@end
