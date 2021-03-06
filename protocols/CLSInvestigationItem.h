/* made by EzioChiu.
 */

@protocol CLSInvestigationItem <NSObject>

@required

+ (NSDictionary *)contextForItems:(NSArray *)arg1;

- (double)clsContentScore;
- (NSDate *)clsDate;
- (NSData *)clsDistanceIdentity;
- (float)clsExposureScore;
- (bool)clsIsHDR;
- (bool)clsIsSDOF;
- (CLLocation *)clsLocation;
- (unsigned long long)clsPeopleCount;
- (NSArray *)clsPeopleNames;
- (long long)clsPlayCount;
- (NSSet *)clsSceneClassifications;
- (long long)clsShareCount;
- (float)clsSharpnessScore;
- (NSArray *)clsUnprefetchedPeopleNames;
- (long long)clsViewCount;
- (struct CGImage { }*)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(bool)arg2 networkAllowed:(bool)arg3;
- (NSDate *)date;
- (NSDateComponents *)dateComponents;
- (bool)isBlurry;
- (bool)isFavorite;
- (bool)isScreenshot;
- (bool)isUtility;
- (NSDate *)localDate;
- (CLLocation *)location;
- (NSArray *)peopleNames;
- (double)scoreWithContext:(NSDictionary *)arg1;
- (NSDate *)universalDate;

@end
