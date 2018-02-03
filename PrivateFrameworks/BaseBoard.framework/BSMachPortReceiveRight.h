/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachPortReceiveRight : BSMachPortRight

+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (id)_rightDescription;
+ (bool)supportsSecureCoding;

- (bool)_queue_isUsable;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
