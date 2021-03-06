/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSIdentifier : NUJSObject

@property (nonatomic, readonly) NUIdentifier *identifier;

- (bool)hasProperty:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3;

@end
