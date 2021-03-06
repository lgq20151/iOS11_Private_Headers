/* made by EzioChiu.
 */

@protocol CLSSnapshotSupportProtocol <NSObject>

@required

- (float)clsActivityLevel;
- (long long)clsBlinkCount;
- (NSData *)clsDistanceIdentity;
- (float)clsExposureScore;
- (unsigned long long)clsPeopleCount;
- (long long)clsPlayCount;
- (NSSet *)clsSceneClassifications;
- (long long)clsShareCount;
- (float)clsSharpnessScore;
- (long long)clsSmileCount;
- (unsigned long long)clsVideoFaceCount;
- (float)clsVideoScore;
- (long long)clsViewCount;
- (double)duration;
- (unsigned long long)facesCount;
- (bool)hasAdjustments;
- (bool)isAudio;
- (bool)isBlurry;
- (bool)isFavorite;
- (bool)isHidden;
- (bool)isIncludedInCloudFeeds;
- (bool)isSubtype:(unsigned long long)arg1;
- (bool)isTrashed;
- (bool)isUtility;
- (bool)isVideo;
- (bool)representsBurst;

@end
