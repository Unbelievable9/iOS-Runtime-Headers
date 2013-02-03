/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class AVPlayer, NSMutableDictionary, AVPlayerItem, SUPlayerStatus, NSURL, AVAsset;

@interface SUAudioPlayer : NSObject {
    AVAsset *_asset;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SUPlayerStatus *_status;
    id _timeObserver;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(readonly) SUPlayerStatus * playerStatus;

- (id)URL;
- (void)_applyNowPlayingInfo;
- (void)_destroyPlayer;
- (void)_destroyPlayerItem;
- (void)_failWithError:(id)arg1;
- (void)_handleAssetValuesDidLoad;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_postStatusChangeNotification;
- (void)_setPlayerState:(int)arg1;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)playerStatus;
- (void)seekToTime:(double)arg1;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)stop;
- (id)valueForNowPlayingKey:(id)arg1;

@end