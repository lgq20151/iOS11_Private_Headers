/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteDelete : SADomainCommand

@property (nonatomic, copy) NSURL *identifier;

+ (id)delete;
+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setIdentifier:(id)arg1;

@end
