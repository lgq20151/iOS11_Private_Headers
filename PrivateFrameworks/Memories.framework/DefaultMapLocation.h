/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface DefaultMapLocation : MapLocation

- (bool)hasValidCoordinate;
- (bool)isResolved;
- (bool)isResolving;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;

@end