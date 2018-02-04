/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ExtraClip : KonaClip

@property (nonatomic) double endRatio;
@property (nonatomic, readonly, retain) NSMutableDictionary *extraDefinition;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double startRatio;
@property (nonatomic, retain) NSString *text;

- (int)clipType;
- (double)endRatio;
- (id)extraDefinition;
- (bool)hasVisualCharacteristic;
- (int)maxDuration;
- (id)name;
- (void)setEndRatio:(double)arg1;
- (void)setName:(id)arg1;
- (void)setStartRatio:(double)arg1;
- (void)setText:(id)arg1;
- (double)startRatio;
- (id)text;

@end