/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isTimeZoneSet;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (struct CGSize { double x1; double x2; })screenSize;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (id)timeZone;

@end