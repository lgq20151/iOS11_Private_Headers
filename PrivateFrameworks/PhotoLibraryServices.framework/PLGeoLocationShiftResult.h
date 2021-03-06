/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLGeoLocationShiftResult : NSObject {
    bool  _encounteredErrors;
    NSArray * _shiftedAssetIDs;
    NSMutableDictionary * _shiftedLocations;
}

@property (nonatomic, readonly) NSArray *assetIDs;
@property (setter=_setEncounteredErrors:, nonatomic) bool encounteredErrors;

- (void)_setCoordinate:(struct { double x1; double x2; })arg1 ForAssetID:(id)arg2;
- (void)_setEncounteredErrors:(bool)arg1;
- (id)assetIDs;
- (void)dealloc;
- (bool)encounteredErrors;
- (bool)hasShiftedLocationForAssetID:(id)arg1;
- (id)initWithAssetIDs:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })shiftedLocationForAssetID:(id)arg1;

@end
