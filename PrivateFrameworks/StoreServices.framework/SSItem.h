/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL, SSItemImageCollection, SSItemOffer, SSURLConnectionRequest;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {
    NSDate *_expirationDate;
    NSArray *_offers;
    NSDictionary *_properties;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSMutableArray *_tellAFriendHandlers;
    SSURLConnectionRequest *_tellAFriendRequest;
    NSString *_tellAFriendSubject;
}

@property(readonly) NSNumber * ITunesStoreIdentifier;
@property(readonly) NSArray * allItemOffers;
@property(readonly) NSString * artistName;
@property(readonly) float averageUserRating;
@property(readonly) SSItemOffer * defaultItemOffer;
@property(readonly) NSDate * expirationDate;
@property(getter=isGameCenterEnabled,readonly) BOOL gameCenterEnabled;
@property(getter=isHighDefinition,readonly) BOOL highDefinition;
@property(readonly) SSItemImageCollection * imageCollection;
@property(readonly) NSString * itemKind;
@property(readonly) NSString * itemTitle;
@property(readonly) int numberOfUserRatings;
@property(getter=isRestricted,readonly) BOOL restricted;
@property(readonly) NSArray * thumbnailImages;
@property(readonly) NSURL * viewItemURL;

- (id)ITunesStoreIdentifier;
- (void)_finishTellAFriendLoadWithError:(id)arg1;
- (id)_offers;
- (void)_setExpirationDate:(id)arg1;
- (id)_tellAFriendDictionary;
- (id)allItemOffers;
- (id)artistIdentifier;
- (id)artistName;
- (float)averageUserRating;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)buyParameters;
- (id)collectionArtistName;
- (id)collectionIdentifier;
- (id)collectionIndexInCollectionGroup;
- (id)collectionName;
- (id)composerName;
- (id)contentRating;
- (void)dealloc;
- (id)defaultItemOffer;
- (id)description;
- (id)episodeIdentifier;
- (id)episodeSortIdentifier;
- (id)expirationDate;
- (id)genreIdentifier;
- (id)genreName;
- (id)imageCollection;
- (id)indexInCollection;
- (id)initWithItemDictionary:(id)arg1;
- (BOOL)isCompilation;
- (BOOL)isGameCenterEnabled;
- (BOOL)isHighDefinition;
- (BOOL)isRestricted;
- (id)itemKind;
- (id)itemOfferForIdentifier:(id)arg1;
- (id)itemTitle;
- (void)loadTellAFriendMessageWithCompletionHandler:(id)arg1;
- (id)longDescription;
- (id)mediaKind;
- (id)networkName;
- (id)numberOfCollectionsInCollectionGroup;
- (id)numberOfItemsInCollection;
- (int)numberOfPrintedPages;
- (int)numberOfUserRatings;
- (id)playableMedia;
- (id)podcastEpisodeGUID;
- (id)podcastFeedURL;
- (id)preOrderIdentifier;
- (id)priceDisplay;
- (id)rawItemDictionary;
- (id)relatedItemsForRelationType:(id)arg1;
- (id)releaseDate;
- (id)releaseDateString;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)seasonNumber;
- (id)sendGiftURL;
- (id)seriesName;
- (id)shortDescription;
- (id)softwareType;
- (id)tellAFriendBody;
- (id)tellAFriendBodyMIMEType;
- (id)tellAFriendBodyURL;
- (id)tellAFriendSubject;
- (id)thumbnailImages;
- (id)tweetInitialText;
- (id)tweetURL;
- (void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)videoDetails;
- (id)viewItemURL;
- (id)viewReviewsURL;

@end
