/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWPA2Counters : PBCodable <NSCopying> {
    unsigned long long  _ccmpfmterr;
    unsigned long long  _ccmpreplay;
    unsigned long long  _ccmpundec;
    unsigned long long  _decsuccess;
    unsigned long long  _fourwayfail;
    struct { 
        unsigned int ccmpfmterr : 1; 
        unsigned int ccmpreplay : 1; 
        unsigned int ccmpundec : 1; 
        unsigned int decsuccess : 1; 
        unsigned int fourwayfail : 1; 
        unsigned int tkipcntrmsr : 1; 
        unsigned int tkipicverr : 1; 
        unsigned int tkipmicfaill : 1; 
        unsigned int tkipreplay : 1; 
        unsigned int wepexcluded : 1; 
        unsigned int wepicverr : 1; 
        unsigned int wepundec : 1; 
    }  _has;
    unsigned long long  _tkipcntrmsr;
    unsigned long long  _tkipicverr;
    unsigned long long  _tkipmicfaill;
    unsigned long long  _tkipreplay;
    unsigned long long  _wepexcluded;
    unsigned long long  _wepicverr;
    unsigned long long  _wepundec;
}

@property (nonatomic) unsigned long long ccmpfmterr;
@property (nonatomic) unsigned long long ccmpreplay;
@property (nonatomic) unsigned long long ccmpundec;
@property (nonatomic) unsigned long long decsuccess;
@property (nonatomic) unsigned long long fourwayfail;
@property (nonatomic) bool hasCcmpfmterr;
@property (nonatomic) bool hasCcmpreplay;
@property (nonatomic) bool hasCcmpundec;
@property (nonatomic) bool hasDecsuccess;
@property (nonatomic) bool hasFourwayfail;
@property (nonatomic) bool hasTkipcntrmsr;
@property (nonatomic) bool hasTkipicverr;
@property (nonatomic) bool hasTkipmicfaill;
@property (nonatomic) bool hasTkipreplay;
@property (nonatomic) bool hasWepexcluded;
@property (nonatomic) bool hasWepicverr;
@property (nonatomic) bool hasWepundec;
@property (nonatomic) unsigned long long tkipcntrmsr;
@property (nonatomic) unsigned long long tkipicverr;
@property (nonatomic) unsigned long long tkipmicfaill;
@property (nonatomic) unsigned long long tkipreplay;
@property (nonatomic) unsigned long long wepexcluded;
@property (nonatomic) unsigned long long wepicverr;
@property (nonatomic) unsigned long long wepundec;

- (unsigned long long)ccmpfmterr;
- (unsigned long long)ccmpreplay;
- (unsigned long long)ccmpundec;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)decsuccess;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)fourwayfail;
- (bool)hasCcmpfmterr;
- (bool)hasCcmpreplay;
- (bool)hasCcmpundec;
- (bool)hasDecsuccess;
- (bool)hasFourwayfail;
- (bool)hasTkipcntrmsr;
- (bool)hasTkipicverr;
- (bool)hasTkipmicfaill;
- (bool)hasTkipreplay;
- (bool)hasWepexcluded;
- (bool)hasWepicverr;
- (bool)hasWepundec;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCcmpfmterr:(unsigned long long)arg1;
- (void)setCcmpreplay:(unsigned long long)arg1;
- (void)setCcmpundec:(unsigned long long)arg1;
- (void)setDecsuccess:(unsigned long long)arg1;
- (void)setFourwayfail:(unsigned long long)arg1;
- (void)setHasCcmpfmterr:(bool)arg1;
- (void)setHasCcmpreplay:(bool)arg1;
- (void)setHasCcmpundec:(bool)arg1;
- (void)setHasDecsuccess:(bool)arg1;
- (void)setHasFourwayfail:(bool)arg1;
- (void)setHasTkipcntrmsr:(bool)arg1;
- (void)setHasTkipicverr:(bool)arg1;
- (void)setHasTkipmicfaill:(bool)arg1;
- (void)setHasTkipreplay:(bool)arg1;
- (void)setHasWepexcluded:(bool)arg1;
- (void)setHasWepicverr:(bool)arg1;
- (void)setHasWepundec:(bool)arg1;
- (void)setTkipcntrmsr:(unsigned long long)arg1;
- (void)setTkipicverr:(unsigned long long)arg1;
- (void)setTkipmicfaill:(unsigned long long)arg1;
- (void)setTkipreplay:(unsigned long long)arg1;
- (void)setWepexcluded:(unsigned long long)arg1;
- (void)setWepicverr:(unsigned long long)arg1;
- (void)setWepundec:(unsigned long long)arg1;
- (unsigned long long)tkipcntrmsr;
- (unsigned long long)tkipicverr;
- (unsigned long long)tkipmicfaill;
- (unsigned long long)tkipreplay;
- (unsigned long long)wepexcluded;
- (unsigned long long)wepicverr;
- (unsigned long long)wepundec;
- (void)writeTo:(id)arg1;

@end
