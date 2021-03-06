/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyDummy_CrownInputSequencer : NSObject {
    <NTKAstronomyDummy_InputSequencerDelegate> * _delegate;
}

@property (nonatomic) <NTKAstronomyDummy_InputSequencerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (double)offset;
- (void)setDelegate:(id)arg1;
- (void)setEnd:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setOffsetPerRevolution:(double)arg1;
- (void)setStart:(double)arg1;
- (void)updateWithCrownInputEvent:(id)arg1;

@end
