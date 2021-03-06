/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcasts : SADomainCommand

@property (nonatomic, copy) NSString *episodePlaybackOrder;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;

+ (id)playPodcasts;
+ (id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)episodePlaybackOrder;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setEpisodePlaybackOrder:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;

@end
