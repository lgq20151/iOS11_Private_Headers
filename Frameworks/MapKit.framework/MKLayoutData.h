/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLayoutData : NSObject <MKLayoutCardProvider> {
    MKPlacecardModuleConfiguration * _layoutConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKPlacecardModuleConfiguration *layoutConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)layoutConfiguration;

@end
