/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (nonatomic, retain) SASyncAnchor *current;

+ (id)chunkAccepted;
+ (id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2;

- (id)current;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCurrent:(id)arg1;

@end
