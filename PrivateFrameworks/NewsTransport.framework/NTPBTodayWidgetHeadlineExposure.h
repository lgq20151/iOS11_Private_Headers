/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying> {
    NSString * _articleId;
    struct { 
        unsigned int widgetArticleCount : 1; 
        unsigned int widgetArticleCountInSection : 1; 
        unsigned int widgetArticleRank : 1; 
        unsigned int widgetArticleRankInSection : 1; 
        unsigned int widgetSectionDisplayRank : 1; 
    }  _has;
    NSString * _sourceChannelId;
    int  _widgetArticleCount;
    int  _widgetArticleCountInSection;
    int  _widgetArticleRank;
    int  _widgetArticleRankInSection;
    int  _widgetSectionDisplayRank;
    NSString * _widgetSectionId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) bool hasWidgetArticleCount;
@property (nonatomic) bool hasWidgetArticleCountInSection;
@property (nonatomic) bool hasWidgetArticleRank;
@property (nonatomic) bool hasWidgetArticleRankInSection;
@property (nonatomic) bool hasWidgetSectionDisplayRank;
@property (nonatomic, readonly) bool hasWidgetSectionId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) int widgetArticleCountInSection;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic, retain) NSString *widgetSectionId;

- (void).cxx_destruct;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasSourceChannelId;
- (bool)hasWidgetArticleCount;
- (bool)hasWidgetArticleCountInSection;
- (bool)hasWidgetArticleRank;
- (bool)hasWidgetArticleRankInSection;
- (bool)hasWidgetSectionDisplayRank;
- (bool)hasWidgetSectionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setHasWidgetArticleCount:(bool)arg1;
- (void)setHasWidgetArticleCountInSection:(bool)arg1;
- (void)setHasWidgetArticleRank:(bool)arg1;
- (void)setHasWidgetArticleRankInSection:(bool)arg1;
- (void)setHasWidgetSectionDisplayRank:(bool)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setWidgetArticleCount:(int)arg1;
- (void)setWidgetArticleCountInSection:(int)arg1;
- (void)setWidgetArticleRank:(int)arg1;
- (void)setWidgetArticleRankInSection:(int)arg1;
- (void)setWidgetSectionDisplayRank:(int)arg1;
- (void)setWidgetSectionId:(id)arg1;
- (id)sourceChannelId;
- (int)widgetArticleCount;
- (int)widgetArticleCountInSection;
- (int)widgetArticleRank;
- (int)widgetArticleRankInSection;
- (int)widgetSectionDisplayRank;
- (id)widgetSectionId;
- (void)writeTo:(id)arg1;

@end
