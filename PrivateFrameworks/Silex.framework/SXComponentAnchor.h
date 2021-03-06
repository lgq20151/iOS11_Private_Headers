/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentAnchor : SXJSONObject

@property (nonatomic, readonly) long long originAnchorPosition;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) long long targetAnchorPosition;
@property (nonatomic, readonly) NSString *targetComponentIdentifier;

- (long long)anchorAlignmentForString:(id)arg1;
- (long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2;
- (long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2;

@end
