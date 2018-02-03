/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAuditHistory : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {
    NSMutableArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSArray *items;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)addItem:(id)arg1;
- (void)addItemWithFormat:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasItems;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)items;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
