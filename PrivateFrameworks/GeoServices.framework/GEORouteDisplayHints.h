/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteDisplayHints : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _availablePaymentTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _availablePrioritizations;
    struct { 
        unsigned int showTransitSchedules : 1; 
    }  _has;
    bool  _showTransitSchedules;
    GEORequestOptions * _transitSurchargeOptions;
}

@property (nonatomic, readonly) int*availablePaymentTypes;
@property (nonatomic, readonly) unsigned long long availablePaymentTypesCount;
@property (nonatomic, readonly) int*availablePrioritizations;
@property (nonatomic, readonly) unsigned long long availablePrioritizationsCount;
@property (nonatomic) bool hasShowTransitSchedules;
@property (nonatomic, readonly) bool hasTransitSurchargeOptions;
@property (nonatomic, readonly) NSArray *prioritizationOptions;
@property (nonatomic) bool showTransitSchedules;
@property (nonatomic, readonly) <GEOSurchargeOption> *surchargeOptions;
@property (nonatomic, retain) GEORequestOptions *transitSurchargeOptions;

- (void).cxx_destruct;
- (int)StringAsAvailablePaymentTypes:(id)arg1;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (int)availablePaymentTypeAtIndex:(unsigned long long)arg1;
- (int*)availablePaymentTypes;
- (id)availablePaymentTypesAsString:(int)arg1;
- (unsigned long long)availablePaymentTypesCount;
- (int)availablePrioritizationAtIndex:(unsigned long long)arg1;
- (int*)availablePrioritizations;
- (id)availablePrioritizationsAsString:(int)arg1;
- (unsigned long long)availablePrioritizationsCount;
- (void)clearAvailablePaymentTypes;
- (void)clearAvailablePrioritizations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShowTransitSchedules;
- (bool)hasTransitSurchargeOptions;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prioritizationOptions;
- (bool)readFrom:(id)arg1;
- (void)setAvailablePaymentTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAvailablePrioritizations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasShowTransitSchedules:(bool)arg1;
- (void)setShowTransitSchedules:(bool)arg1;
- (void)setTransitSurchargeOptions:(id)arg1;
- (bool)showTransitSchedules;
- (id)surchargeOptions;
- (id)transitSurchargeOptions;
- (void)writeTo:(id)arg1;

@end