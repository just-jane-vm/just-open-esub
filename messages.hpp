#pragma once

#include <boost/json/object.hpp>
#include <string>
#include <vector>

#include <boost/json.hpp>

std::string value_as_string(boost::json::object obj, const std::string name) {
  if (obj[name].is_null())
    return "";

  return obj.at(name).as_string().c_str();
}

int value_as_int(boost::json::object obj, const std::string name) {
  if (obj[name].is_null())
    return -1;

  return obj.at(name).as_int64();
}

class BitsVotingBitsVoting {
public:
  BitsVotingBitsVoting(){}

  BitsVotingBitsVoting(boost::json::object obj) {
    is_enabled = obj.at("is_enabled").as_bool();
    amount_per_vote = value_as_int(obj, "amount_per_vote");
  }

  bool is_enabled;
  int amount_per_vote;
};

class ChannelPointsVotingChannelPointsVoting {
public:
  ChannelPointsVotingChannelPointsVoting(){}

  ChannelPointsVotingChannelPointsVoting(boost::json::object obj) {
    is_enabled = obj.at("is_enabled").as_bool();
    amount_per_vote = value_as_int(obj, "amount_per_vote");
  }

  bool is_enabled;
  int amount_per_vote;
};

class Choices {
public:
  Choices(){}

  Choices(boost::json::object obj) {
    id = value_as_string(obj, "id");
    title = value_as_string(obj, "title");
    bits_votes = value_as_int(obj, "bits_votes");
    channel_points_votes = value_as_int(obj, "channel_points_votes");
    votes = value_as_int(obj, "votes");
  }

  std::string id;
  std::string title;
  int bits_votes;
  int channel_points_votes;
  int votes;
};

class AutomodMessageHoldCondition {
public:
  AutomodMessageHoldCondition(){}

  AutomodMessageHoldCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class AutomodMessageUpdateCondition {
public:
  AutomodMessageUpdateCondition(){}

  AutomodMessageUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class AutomodSettingsUpdateCondition {
public:
  AutomodSettingsUpdateCondition(){}

  AutomodSettingsUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class AutomodTermsUpdateCondition {
public:
  AutomodTermsUpdateCondition(){}

  AutomodTermsUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelAdBreakBeginCondition {
public:
  ChannelAdBreakBeginCondition(){}

  ChannelAdBreakBeginCondition(boost::json::object obj) {
    broadcaster_id = value_as_string(obj, "broadcaster_id");
  }

  std::string broadcaster_id;
};

class ChannelBanCondition {
public:
  ChannelBanCondition(){}

  ChannelBanCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelBitsUseCondition {
public:
  ChannelBitsUseCondition(){}

  ChannelBitsUseCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelChatClearCondition {
public:
  ChannelChatClearCondition(){}

  ChannelChatClearCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelChatClearUserMessagesCondition {
public:
  ChannelChatClearUserMessagesCondition(){}

  ChannelChatClearUserMessagesCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelChatMessageCondition {
public:
  ChannelChatMessageCondition(){}

  ChannelChatMessageCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelChatMessageDeleteCondition {
public:
  ChannelChatMessageDeleteCondition(){}

  ChannelChatMessageDeleteCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelChatNotificationCondition {
public:
  ChannelChatNotificationCondition(){}

  ChannelChatNotificationCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelChatSettingsUpdateCondition {
public:
  ChannelChatSettingsUpdateCondition(){}

  ChannelChatSettingsUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelChatUserMessageHoldCondition {
public:
  ChannelChatUserMessageHoldCondition(){}

  ChannelChatUserMessageHoldCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelChatUserMessageUpdateCondition {
public:
  ChannelChatUserMessageUpdateCondition(){}

  ChannelChatUserMessageUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    user_id = value_as_string(obj, "user_id");
  }

  std::string broadcaster_user_id;
  std::string user_id;
};

class ChannelSubscribeCondition {
public:
  ChannelSubscribeCondition(){}

  ChannelSubscribeCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelSubscriptionEndCondition {
public:
  ChannelSubscriptionEndCondition(){}

  ChannelSubscriptionEndCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelSubscriptionGiftCondition {
public:
  ChannelSubscriptionGiftCondition(){}

  ChannelSubscriptionGiftCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelSubscriptionMessageCondition {
public:
  ChannelSubscriptionMessageCondition(){}

  ChannelSubscriptionMessageCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelCheerCondition {
public:
  ChannelCheerCondition(){}

  ChannelCheerCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelUpdateCondition {
public:
  ChannelUpdateCondition(){}

  ChannelUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelFollowCondition {
public:
  ChannelFollowCondition(){}

  ChannelFollowCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelUnbanCondition {
public:
  ChannelUnbanCondition(){}

  ChannelUnbanCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelUnbanRequestCreateCondition {
public:
  ChannelUnbanRequestCreateCondition(){}

  ChannelUnbanRequestCreateCondition(boost::json::object obj) {
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string moderator_user_id;
  std::string broadcaster_user_id;
};

class ChannelUnbanRequestResolveCondition {
public:
  ChannelUnbanRequestResolveCondition(){}

  ChannelUnbanRequestResolveCondition(boost::json::object obj) {
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string moderator_user_id;
  std::string broadcaster_user_id;
};

class ChannelRaidCondition {
public:
  ChannelRaidCondition(){}

  ChannelRaidCondition(boost::json::object obj) {
    from_broadcaster_user_id = value_as_string(obj, "from_broadcaster_user_id");
    to_broadcaster_user_id = value_as_string(obj, "to_broadcaster_user_id");
  }

  std::string from_broadcaster_user_id;
  std::string to_broadcaster_user_id;
};

class ChannelModerateCondition {
public:
  ChannelModerateCondition(){}

  ChannelModerateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelModerateV2Condition {
public:
  ChannelModerateV2Condition(){}

  ChannelModerateV2Condition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelModeratorAddCondition {
public:
  ChannelModeratorAddCondition(){}

  ChannelModeratorAddCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelModeratorRemoveCondition {
public:
  ChannelModeratorRemoveCondition(){}

  ChannelModeratorRemoveCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelGuestStarSessionBeginCondition {
public:
  ChannelGuestStarSessionBeginCondition(){}

  ChannelGuestStarSessionBeginCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelGuestStarSessionEndCondition {
public:
  ChannelGuestStarSessionEndCondition(){}

  ChannelGuestStarSessionEndCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelGuestStarGuestUpdateCondition {
public:
  ChannelGuestStarGuestUpdateCondition(){}

  ChannelGuestStarGuestUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelGuestStarSettingsUpdateCondition {
public:
  ChannelGuestStarSettingsUpdateCondition(){}

  ChannelGuestStarSettingsUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelPointsAutomaticRewardRedemptionAddCondition {
public:
  ChannelPointsAutomaticRewardRedemptionAddCondition(){}

  ChannelPointsAutomaticRewardRedemptionAddCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPointsAutomaticRewardRedemptionAddV2Condition {
public:
  ChannelPointsAutomaticRewardRedemptionAddV2Condition(){}

  ChannelPointsAutomaticRewardRedemptionAddV2Condition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPointsCustomRewardAddCondition {
public:
  ChannelPointsCustomRewardAddCondition(){}

  ChannelPointsCustomRewardAddCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPointsCustomRewardUpdateCondition {
public:
  ChannelPointsCustomRewardUpdateCondition(){}

  ChannelPointsCustomRewardUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    reward_id = value_as_string(obj, "reward_id");
  }

  std::string broadcaster_user_id;
  std::string reward_id;
};

class ChannelPointsCustomRewardRemoveCondition {
public:
  ChannelPointsCustomRewardRemoveCondition(){}

  ChannelPointsCustomRewardRemoveCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    reward_id = value_as_string(obj, "reward_id");
  }

  std::string broadcaster_user_id;
  std::string reward_id;
};

class ChannelPointsCustomRewardRedemptionAddCondition {
public:
  ChannelPointsCustomRewardRedemptionAddCondition(){}

  ChannelPointsCustomRewardRedemptionAddCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    reward_id = value_as_string(obj, "reward_id");
  }

  std::string broadcaster_user_id;
  std::string reward_id;
};

class ChannelPointsCustomRewardRedemptionUpdateCondition {
public:
  ChannelPointsCustomRewardRedemptionUpdateCondition(){}

  ChannelPointsCustomRewardRedemptionUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    reward_id = value_as_string(obj, "reward_id");
  }

  std::string broadcaster_user_id;
  std::string reward_id;
};

class ChannelCustomPowerupRedemptionAddCondition {
public:
  ChannelCustomPowerupRedemptionAddCondition(){}

  ChannelCustomPowerupRedemptionAddCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    reward_id = value_as_string(obj, "reward_id");
  }

  std::string broadcaster_user_id;
  std::string reward_id;
};

class ChannelPollBeginCondition {
public:
  ChannelPollBeginCondition(){}

  ChannelPollBeginCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPollProgressCondition {
public:
  ChannelPollProgressCondition(){}

  ChannelPollProgressCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPollEndCondition {
public:
  ChannelPollEndCondition(){}

  ChannelPollEndCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPredictionBeginCondition {
public:
  ChannelPredictionBeginCondition(){}

  ChannelPredictionBeginCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPredictionProgressCondition {
public:
  ChannelPredictionProgressCondition(){}

  ChannelPredictionProgressCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPredictionLockCondition {
public:
  ChannelPredictionLockCondition(){}

  ChannelPredictionLockCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelPredictionEndCondition {
public:
  ChannelPredictionEndCondition(){}

  ChannelPredictionEndCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelSharedChatSessionBeginCondition {
public:
  ChannelSharedChatSessionBeginCondition(){}

  ChannelSharedChatSessionBeginCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelSharedChatSessionUpdateCondition {
public:
  ChannelSharedChatSessionUpdateCondition(){}

  ChannelSharedChatSessionUpdateCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelSharedChatSessionEndCondition {
public:
  ChannelSharedChatSessionEndCondition(){}

  ChannelSharedChatSessionEndCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelSuspiciousUserMessageCondition {
public:
  ChannelSuspiciousUserMessageCondition(){}

  ChannelSuspiciousUserMessageCondition(boost::json::object obj) {
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string moderator_user_id;
  std::string broadcaster_user_id;
};

class ChannelSuspiciousUserUpdateCondition {
public:
  ChannelSuspiciousUserUpdateCondition(){}

  ChannelSuspiciousUserUpdateCondition(boost::json::object obj) {
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string moderator_user_id;
  std::string broadcaster_user_id;
};

class ChannelVipAddCondition {
public:
  ChannelVipAddCondition(){}

  ChannelVipAddCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelVipRemoveCondition {
public:
  ChannelVipRemoveCondition(){}

  ChannelVipRemoveCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class ChannelWarningAcknowledgeCondition {
public:
  ChannelWarningAcknowledgeCondition(){}

  ChannelWarningAcknowledgeCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ChannelWarningSendCondition {
public:
  ChannelWarningSendCondition(){}

  ChannelWarningSendCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
  }

  std::string broadcaster_user_id;
  std::string moderator_user_id;
};

class ConduitShardDisabledCondition {
public:
  ConduitShardDisabledCondition(){}

  ConduitShardDisabledCondition(boost::json::object obj) {
    client_id = value_as_string(obj, "client_id");
    conduit_id = value_as_string(obj, "conduit_id");
  }

  std::string client_id;
  std::string conduit_id;
};

class DropEntitlementGrantCondition {
public:
  DropEntitlementGrantCondition(){}

  DropEntitlementGrantCondition(boost::json::object obj) {
    organization_id = value_as_string(obj, "organization_id");
    category_id = value_as_string(obj, "category_id");
    campaign_id = value_as_string(obj, "campaign_id");
  }

  std::string organization_id;
  std::string category_id;
  std::string campaign_id;
};

class ExtensionBitsTransactionCreateCondition {
public:
  ExtensionBitsTransactionCreateCondition(){}

  ExtensionBitsTransactionCreateCondition(boost::json::object obj) {
    extension_client_id = value_as_string(obj, "extension_client_id");
  }

  std::string extension_client_id;
};

class GoalsCondition {
public:
  GoalsCondition(){}

  GoalsCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class HypeTrainBeginCondition {
public:
  HypeTrainBeginCondition(){}

  HypeTrainBeginCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class HypeTrainProgressCondition {
public:
  HypeTrainProgressCondition(){}

  HypeTrainProgressCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class HypeTrainEndCondition {
public:
  HypeTrainEndCondition(){}

  HypeTrainEndCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class StreamOnlineCondition {
public:
  StreamOnlineCondition(){}

  StreamOnlineCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class StreamOfflineCondition {
public:
  StreamOfflineCondition(){}

  StreamOfflineCondition(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
  }

  std::string broadcaster_user_id;
};

class UserAuthorizationGrantCondition {
public:
  UserAuthorizationGrantCondition(){}

  UserAuthorizationGrantCondition(boost::json::object obj) {
    client_id = value_as_string(obj, "client_id");
  }

  std::string client_id;
};

class UserAuthorizationRevokeCondition {
public:
  UserAuthorizationRevokeCondition(){}

  UserAuthorizationRevokeCondition(boost::json::object obj) {
    client_id = value_as_string(obj, "client_id");
  }

  std::string client_id;
};

class UserUpdateCondition {
public:
  UserUpdateCondition(){}

  UserUpdateCondition(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
  }

  std::string user_id;
};

class WhisperReceivedCondition {
public:
  WhisperReceivedCondition(){}

  WhisperReceivedCondition(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
  }

  std::string user_id;
};

class CustomPowerUpCustomPowerUp {
public:
  CustomPowerUpCustomPowerUp(){}

  CustomPowerUpCustomPowerUp(boost::json::object obj) {
    id = value_as_string(obj, "id");
    title = value_as_string(obj, "title");
    bits = value_as_int(obj, "bits");
    prompt = value_as_string(obj, "prompt");
  }

  std::string id;
  std::string title;
  int bits;
  std::string prompt;
};

class Emotes {
public:
  Emotes(){}

  Emotes(boost::json::object obj) {
    begin = value_as_int(obj, "begin");
    end = value_as_int(obj, "end");
    id = value_as_string(obj, "id");
  }

  int begin;
  int end;
  std::string id;
};

class AutomodMessageHoldEventEmote {
public:
  AutomodMessageHoldEventEmote(){}

  AutomodMessageHoldEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
  }

  std::string id;
  std::string emote_set_id;
};

class AutomodMessageHoldEventCheermote {
public:
  AutomodMessageHoldEventCheermote(){}

  AutomodMessageHoldEventCheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class AutomodMessageHoldEventFragment {
public:
  AutomodMessageHoldEventFragment(){}

  AutomodMessageHoldEventFragment(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["emote"].is_null()) {
      emote = AutomodMessageHoldEventEmote(obj.at("emote").as_object());
    }

    if (!obj["cheermote"].is_null()) {
      cheermote = AutomodMessageHoldEventCheermote(obj.at("cheermote").as_object());
    }

  }

  std::string text;
  std::optional<AutomodMessageHoldEventEmote> emote;
  std::optional<AutomodMessageHoldEventCheermote> cheermote;
};

class AutomodMessageHoldEventMessage {
public:
  AutomodMessageHoldEventMessage(){}

  AutomodMessageHoldEventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<AutomodMessageHoldEventFragment> fragment;
};

class AutomodMessageHoldEvent {
public:
  AutomodMessageHoldEvent(){}

  AutomodMessageHoldEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = AutomodMessageHoldEventMessage(obj.at("message").as_object());
    }

    category = value_as_string(obj, "category");
    level = value_as_int(obj, "level");
    held_at = value_as_string(obj, "held_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string message_id;
  std::optional<AutomodMessageHoldEventMessage> message;
  std::string category;
  int level;
  std::string held_at;
};

class AutomodMessageHoldEventV2Emote {
public:
  AutomodMessageHoldEventV2Emote(){}

  AutomodMessageHoldEventV2Emote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
  }

  std::string id;
  std::string emote_set_id;
};

class AutomodMessageHoldEventV2Cheermote {
public:
  AutomodMessageHoldEventV2Cheermote(){}

  AutomodMessageHoldEventV2Cheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class AutomodMessageHoldEventV2Fragment {
public:
  AutomodMessageHoldEventV2Fragment(){}

  AutomodMessageHoldEventV2Fragment(boost::json::object obj) {
    type = value_as_string(obj, "type");
    text = value_as_string(obj, "text");
    if (!obj["emote"].is_null()) {
      emote = AutomodMessageHoldEventV2Emote(obj.at("emote").as_object());
    }

    if (!obj["cheermote"].is_null()) {
      cheermote = AutomodMessageHoldEventV2Cheermote(obj.at("cheermote").as_object());
    }

  }

  std::string type;
  std::string text;
  std::optional<AutomodMessageHoldEventV2Emote> emote;
  std::optional<AutomodMessageHoldEventV2Cheermote> cheermote;
};

class AutomodMessageHoldEventV2Message {
public:
  AutomodMessageHoldEventV2Message(){}

  AutomodMessageHoldEventV2Message(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<AutomodMessageHoldEventV2Fragment> fragment;
};

class AutomodMessageHoldEventV2Boundary {
public:
  AutomodMessageHoldEventV2Boundary(){}

  AutomodMessageHoldEventV2Boundary(boost::json::object obj) {
    start_pos = value_as_int(obj, "start_pos");
    end_pos = value_as_int(obj, "end_pos");
  }

  int start_pos;
  int end_pos;
};

class AutomodMessageHoldEventV2Automod {
public:
  AutomodMessageHoldEventV2Automod(){}

  AutomodMessageHoldEventV2Automod(boost::json::object obj) {
    category = value_as_string(obj, "category");
    level = value_as_int(obj, "level");
    if (!obj["boundaries"].is_null()) {
      for (auto item : obj.at("boundaries").as_array()) {
          boundary.push_back(item.as_object());
      }
    }

  }

  std::string category;
  int level;
  std::vector<AutomodMessageHoldEventV2Boundary> boundary;
};

class AutomodMessageHoldEventV2TermFound {
public:
  AutomodMessageHoldEventV2TermFound(){}

  AutomodMessageHoldEventV2TermFound(boost::json::object obj) {
    term_id = value_as_string(obj, "term_id");
    if (!obj["boundary"].is_null()) {
      boundary = AutomodMessageHoldEventV2Boundary(obj.at("boundary").as_object());
    }

    owner_broadcaster_user_id = value_as_string(obj, "owner_broadcaster_user_id");
    owner_broadcaster_user_login = value_as_string(obj, "owner_broadcaster_user_login");
    owner_broadcaster_user_name = value_as_string(obj, "owner_broadcaster_user_name");
  }

  std::string term_id;
  std::optional<AutomodMessageHoldEventV2Boundary> boundary;
  std::string owner_broadcaster_user_id;
  std::string owner_broadcaster_user_login;
  std::string owner_broadcaster_user_name;
};

class AutomodMessageHoldEventV2BlockedTerm {
public:
  AutomodMessageHoldEventV2BlockedTerm(){}

  AutomodMessageHoldEventV2BlockedTerm(boost::json::object obj) {
    if (!obj["terms_found"].is_null()) {
      for (auto item : obj.at("terms_found").as_array()) {
          term_found.push_back(item.as_object());
      }
    }

  }

  std::vector<AutomodMessageHoldEventV2TermFound> term_found;
};

class AutomodMessageHoldEventV2 {
public:
  AutomodMessageHoldEventV2(){}

  AutomodMessageHoldEventV2(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = AutomodMessageHoldEventV2Message(obj.at("message").as_object());
    }

    held_at = value_as_string(obj, "held_at");
    reason = value_as_string(obj, "reason");
    if (!obj["automod"].is_null()) {
      automod = AutomodMessageHoldEventV2Automod(obj.at("automod").as_object());
    }

    if (!obj["blocked_term"].is_null()) {
      blocked_term = AutomodMessageHoldEventV2BlockedTerm(obj.at("blocked_term").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string message_id;
  std::optional<AutomodMessageHoldEventV2Message> message;
  std::string held_at;
  std::string reason;
  std::optional<AutomodMessageHoldEventV2Automod> automod;
  std::optional<AutomodMessageHoldEventV2BlockedTerm> blocked_term;
};

class AutomodMessageUpdateEventEmote {
public:
  AutomodMessageUpdateEventEmote(){}

  AutomodMessageUpdateEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
  }

  std::string id;
  std::string emote_set_id;
};

class AutomodMessageUpdateEventCheermote {
public:
  AutomodMessageUpdateEventCheermote(){}

  AutomodMessageUpdateEventCheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class AutomodMessageUpdateEventFragment {
public:
  AutomodMessageUpdateEventFragment(){}

  AutomodMessageUpdateEventFragment(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["emote"].is_null()) {
      emote = AutomodMessageUpdateEventEmote(obj.at("emote").as_object());
    }

    if (!obj["cheermote"].is_null()) {
      cheermote = AutomodMessageUpdateEventCheermote(obj.at("cheermote").as_object());
    }

  }

  std::string text;
  std::optional<AutomodMessageUpdateEventEmote> emote;
  std::optional<AutomodMessageUpdateEventCheermote> cheermote;
};

class AutomodMessageUpdateEventMessage {
public:
  AutomodMessageUpdateEventMessage(){}

  AutomodMessageUpdateEventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<AutomodMessageUpdateEventFragment> fragment;
};

class AutomodMessageUpdateEvent {
public:
  AutomodMessageUpdateEvent(){}

  AutomodMessageUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = AutomodMessageUpdateEventMessage(obj.at("message").as_object());
    }

    category = value_as_string(obj, "category");
    level = value_as_int(obj, "level");
    status = value_as_string(obj, "status");
    held_at = value_as_string(obj, "held_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string moderator_user_id;
  std::string moderator_user_name;
  std::string moderator_user_login;
  std::string message_id;
  std::optional<AutomodMessageUpdateEventMessage> message;
  std::string category;
  int level;
  std::string status;
  std::string held_at;
};

class AutomodMessageUpdateEventV2Emote {
public:
  AutomodMessageUpdateEventV2Emote(){}

  AutomodMessageUpdateEventV2Emote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
  }

  std::string id;
  std::string emote_set_id;
};

class AutomodMessageUpdateEventV2Cheermote {
public:
  AutomodMessageUpdateEventV2Cheermote(){}

  AutomodMessageUpdateEventV2Cheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class AutomodMessageUpdateEventV2Fragment {
public:
  AutomodMessageUpdateEventV2Fragment(){}

  AutomodMessageUpdateEventV2Fragment(boost::json::object obj) {
    text = value_as_string(obj, "text");
    type = value_as_string(obj, "type");
    if (!obj["emote"].is_null()) {
      emote = AutomodMessageUpdateEventV2Emote(obj.at("emote").as_object());
    }

    if (!obj["cheermote"].is_null()) {
      cheermote = AutomodMessageUpdateEventV2Cheermote(obj.at("cheermote").as_object());
    }

  }

  std::string text;
  std::string type;
  std::optional<AutomodMessageUpdateEventV2Emote> emote;
  std::optional<AutomodMessageUpdateEventV2Cheermote> cheermote;
};

class AutomodMessageUpdateEventV2Message {
public:
  AutomodMessageUpdateEventV2Message(){}

  AutomodMessageUpdateEventV2Message(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<AutomodMessageUpdateEventV2Fragment> fragment;
};

class AutomodMessageUpdateEventV2Boundary {
public:
  AutomodMessageUpdateEventV2Boundary(){}

  AutomodMessageUpdateEventV2Boundary(boost::json::object obj) {
    start_pos = value_as_int(obj, "start_pos");
    end_pos = value_as_int(obj, "end_pos");
  }

  int start_pos;
  int end_pos;
};

class AutomodMessageUpdateEventV2Automod {
public:
  AutomodMessageUpdateEventV2Automod(){}

  AutomodMessageUpdateEventV2Automod(boost::json::object obj) {
    category = value_as_string(obj, "category");
    level = value_as_int(obj, "level");
    if (!obj["boundaries"].is_null()) {
      for (auto item : obj.at("boundaries").as_array()) {
          boundary.push_back(item.as_object());
      }
    }

  }

  std::string category;
  int level;
  std::vector<AutomodMessageUpdateEventV2Boundary> boundary;
};

class AutomodMessageUpdateEventV2TermFound {
public:
  AutomodMessageUpdateEventV2TermFound(){}

  AutomodMessageUpdateEventV2TermFound(boost::json::object obj) {
    term_id = value_as_string(obj, "term_id");
    if (!obj["boundary"].is_null()) {
      boundary = AutomodMessageUpdateEventV2Boundary(obj.at("boundary").as_object());
    }

    owner_broadcaster_user_id = value_as_string(obj, "owner_broadcaster_user_id");
    owner_broadcaster_user_login = value_as_string(obj, "owner_broadcaster_user_login");
    owner_broadcaster_user_name = value_as_string(obj, "owner_broadcaster_user_name");
  }

  std::string term_id;
  std::optional<AutomodMessageUpdateEventV2Boundary> boundary;
  std::string owner_broadcaster_user_id;
  std::string owner_broadcaster_user_login;
  std::string owner_broadcaster_user_name;
};

class AutomodMessageUpdateEventV2BlockedTerm {
public:
  AutomodMessageUpdateEventV2BlockedTerm(){}

  AutomodMessageUpdateEventV2BlockedTerm(boost::json::object obj) {
    if (!obj["terms_found"].is_null()) {
      for (auto item : obj.at("terms_found").as_array()) {
          term_found.push_back(item.as_object());
      }
    }

  }

  std::vector<AutomodMessageUpdateEventV2TermFound> term_found;
};

class AutomodMessageUpdateEventV2 {
public:
  AutomodMessageUpdateEventV2(){}

  AutomodMessageUpdateEventV2(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = AutomodMessageUpdateEventV2Message(obj.at("message").as_object());
    }

    status = value_as_string(obj, "status");
    held_at = value_as_string(obj, "held_at");
    reason = value_as_string(obj, "reason");
    if (!obj["automod"].is_null()) {
      automod = AutomodMessageUpdateEventV2Automod(obj.at("automod").as_object());
    }

    if (!obj["blocked_term"].is_null()) {
      blocked_term = AutomodMessageUpdateEventV2BlockedTerm(obj.at("blocked_term").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string moderator_user_id;
  std::string moderator_user_name;
  std::string moderator_user_login;
  std::string message_id;
  std::optional<AutomodMessageUpdateEventV2Message> message;
  std::string status;
  std::string held_at;
  std::string reason;
  std::optional<AutomodMessageUpdateEventV2Automod> automod;
  std::optional<AutomodMessageUpdateEventV2BlockedTerm> blocked_term;
};

class AutomodSettingsUpdateEvent {
public:
  AutomodSettingsUpdateEvent(){}

  AutomodSettingsUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    bullying = value_as_int(obj, "bullying");
    overall_level = value_as_int(obj, "overall_level");
    disability = value_as_int(obj, "disability");
    race_ethnicity_or_religion = value_as_int(obj, "race_ethnicity_or_religion");
    misogyny = value_as_int(obj, "misogyny");
    sexuality_sex_or_gender = value_as_int(obj, "sexuality_sex_or_gender");
    aggression = value_as_int(obj, "aggression");
    sex_based_terms = value_as_int(obj, "sex_based_terms");
    swearing = value_as_int(obj, "swearing");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  int bullying;
  int overall_level;
  int disability;
  int race_ethnicity_or_religion;
  int misogyny;
  int sexuality_sex_or_gender;
  int aggression;
  int sex_based_terms;
  int swearing;
};

class AutomodTermsUpdateEvent {
public:
  AutomodTermsUpdateEvent(){}

  AutomodTermsUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    action = value_as_string(obj, "action");
    from_automod = obj.at("from_automod").as_bool();
    if (!obj["terms"].is_null()) {
      for (auto item : obj.at("terms").as_array()) {
          terms.push_back(item.as_string().c_str());
      }
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  std::string action;
  bool from_automod;
  std::vector<std::string> terms;
};

class ChannelAdBreakBeginEvent {
public:
  ChannelAdBreakBeginEvent(){}

  ChannelAdBreakBeginEvent(boost::json::object obj) {
    duration_seconds = value_as_int(obj, "duration_seconds");
    started_at = value_as_string(obj, "started_at");
    is_automatic = obj.at("is_automatic").as_bool();
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    requester_user_id = value_as_string(obj, "requester_user_id");
    requester_user_login = value_as_string(obj, "requester_user_login");
    requester_user_name = value_as_string(obj, "requester_user_name");
  }

  int duration_seconds;
  std::string started_at;
  bool is_automatic;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string requester_user_id;
  std::string requester_user_login;
  std::string requester_user_name;
};

class ChannelBanEvent {
public:
  ChannelBanEvent(){}

  ChannelBanEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    reason = value_as_string(obj, "reason");
    banned_at = value_as_string(obj, "banned_at");
    ends_at = value_as_string(obj, "ends_at");
    is_permanent = obj.at("is_permanent").as_bool();
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  std::string reason;
  std::string banned_at;
  std::string ends_at;
  bool is_permanent;
};

class ChannelBitsUseEventEmote {
public:
  ChannelBitsUseEventEmote(){}

  ChannelBitsUseEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
    owner_id = value_as_string(obj, "owner_id");
    if (!obj["format"].is_null()) {
      for (auto item : obj.at("format").as_array()) {
          format.push_back(item.as_string().c_str());
      }
    }

  }

  std::string id;
  std::string emote_set_id;
  std::string owner_id;
  std::vector<std::string> format;
};

class ChannelBitsUseEventCheermote {
public:
  ChannelBitsUseEventCheermote(){}

  ChannelBitsUseEventCheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class ChannelBitsUseEventFragment {
public:
  ChannelBitsUseEventFragment(){}

  ChannelBitsUseEventFragment(boost::json::object obj) {
    text = value_as_string(obj, "text");
    type = value_as_string(obj, "type");
    if (!obj["emote"].is_null()) {
      emote = ChannelBitsUseEventEmote(obj.at("emote").as_object());
    }

    if (!obj["cheermote"].is_null()) {
      cheermote = ChannelBitsUseEventCheermote(obj.at("cheermote").as_object());
    }

  }

  std::string text;
  std::string type;
  std::optional<ChannelBitsUseEventEmote> emote;
  std::optional<ChannelBitsUseEventCheermote> cheermote;
};

class ChannelBitsUseEventMessage {
public:
  ChannelBitsUseEventMessage(){}

  ChannelBitsUseEventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<ChannelBitsUseEventFragment> fragment;
};

class ChannelBitsUseEventEmote {
public:
  ChannelBitsUseEventEmote(){}

  ChannelBitsUseEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    name = value_as_string(obj, "name");
  }

  std::string id;
  std::string name;
};

class PowerUp {
public:
  PowerUp(){}

  PowerUp(boost::json::object obj) {
    type = value_as_string(obj, "type");
    if (!obj["emote"].is_null()) {
      emote = ChannelBitsUseEventEmote(obj.at("emote").as_object());
    }

    message_effect_id = value_as_string(obj, "message_effect_id");
  }

  std::string type;
  std::optional<ChannelBitsUseEventEmote> emote;
  std::string message_effect_id;
};

class ChannelBitsUseEventCustomPowerUp {
public:
  ChannelBitsUseEventCustomPowerUp(){}

  ChannelBitsUseEventCustomPowerUp(boost::json::object obj) {
    title = value_as_string(obj, "title");
    reward_id = value_as_string(obj, "reward_id");
  }

  std::string title;
  std::string reward_id;
};

class ChannelBitsUseEvent {
public:
  ChannelBitsUseEvent(){}

  ChannelBitsUseEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    bits = value_as_int(obj, "bits");
    type = value_as_string(obj, "type");
    if (!obj["message"].is_null()) {
      message = ChannelBitsUseEventMessage(obj.at("message").as_object());
    }

    if (!obj["power_up"].is_null()) {
      power_up = PowerUp(obj.at("power_up").as_object());
    }

    if (!obj["custom_power_up"].is_null()) {
      custom_power_up = ChannelBitsUseEventCustomPowerUp(obj.at("custom_power_up").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  int bits;
  std::string type;
  std::optional<ChannelBitsUseEventMessage> message;
  std::optional<PowerUp> power_up;
  std::optional<ChannelBitsUseEventCustomPowerUp> custom_power_up;
};

class ChannelChatClearEvent {
public:
  ChannelChatClearEvent(){}

  ChannelChatClearEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
};

class ChannelChatClearUserMessagesEvent {
public:
  ChannelChatClearUserMessagesEvent(){}

  ChannelChatClearUserMessagesEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    target_user_id = value_as_string(obj, "target_user_id");
    target_user_name = value_as_string(obj, "target_user_name");
    target_user_login = value_as_string(obj, "target_user_login");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string target_user_id;
  std::string target_user_name;
  std::string target_user_login;
};

class ChannelChatMessageEventCheermote {
public:
  ChannelChatMessageEventCheermote(){}

  ChannelChatMessageEventCheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class ChannelChatMessageEventEmote {
public:
  ChannelChatMessageEventEmote(){}

  ChannelChatMessageEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
    owner_id = value_as_string(obj, "owner_id");
    if (!obj["format"].is_null()) {
      for (auto item : obj.at("format").as_array()) {
          format.push_back(item.as_string().c_str());
      }
    }

  }

  std::string id;
  std::string emote_set_id;
  std::string owner_id;
  std::vector<std::string> format;
};

class ChannelChatMessageEventMention {
public:
  ChannelChatMessageEventMention(){}

  ChannelChatMessageEventMention(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_name = value_as_string(obj, "user_name");
    user_login = value_as_string(obj, "user_login");
  }

  std::string user_id;
  std::string user_name;
  std::string user_login;
};

class ChannelChatMessageEventFragment {
public:
  ChannelChatMessageEventFragment(){}

  ChannelChatMessageEventFragment(boost::json::object obj) {
    type = value_as_string(obj, "type");
    text = value_as_string(obj, "text");
    if (!obj["cheermote"].is_null()) {
      cheermote = ChannelChatMessageEventCheermote(obj.at("cheermote").as_object());
    }

    if (!obj["emote"].is_null()) {
      emote = ChannelChatMessageEventEmote(obj.at("emote").as_object());
    }

    if (!obj["mention"].is_null()) {
      mention = ChannelChatMessageEventMention(obj.at("mention").as_object());
    }

  }

  std::string type;
  std::string text;
  std::optional<ChannelChatMessageEventCheermote> cheermote;
  std::optional<ChannelChatMessageEventEmote> emote;
  std::optional<ChannelChatMessageEventMention> mention;
};

class ChannelChatMessageEventMessage {
public:
  ChannelChatMessageEventMessage(){}

  ChannelChatMessageEventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<ChannelChatMessageEventFragment> fragment;
};

class ChannelChatMessageEventBadge {
public:
  ChannelChatMessageEventBadge(){}

  ChannelChatMessageEventBadge(boost::json::object obj) {
    set_id = value_as_string(obj, "set_id");
    id = value_as_string(obj, "id");
    info = value_as_string(obj, "info");
  }

  std::string set_id;
  std::string id;
  std::string info;
};

class Cheer {
public:
  Cheer(){}

  Cheer(boost::json::object obj) {
    bits = value_as_int(obj, "bits");
  }

  int bits;
};

class Reply {
public:
  Reply(){}

  Reply(boost::json::object obj) {
    parent_message_id = value_as_string(obj, "parent_message_id");
    parent_message_body = value_as_string(obj, "parent_message_body");
    parent_user_id = value_as_string(obj, "parent_user_id");
    parent_user_name = value_as_string(obj, "parent_user_name");
    parent_user_login = value_as_string(obj, "parent_user_login");
    thread_message_id = value_as_string(obj, "thread_message_id");
    thread_user_id = value_as_string(obj, "thread_user_id");
    thread_user_name = value_as_string(obj, "thread_user_name");
    thread_user_login = value_as_string(obj, "thread_user_login");
  }

  std::string parent_message_id;
  std::string parent_message_body;
  std::string parent_user_id;
  std::string parent_user_name;
  std::string parent_user_login;
  std::string thread_message_id;
  std::string thread_user_id;
  std::string thread_user_name;
  std::string thread_user_login;
};

class ChannelChatMessageEventSourceBadges {
public:
  ChannelChatMessageEventSourceBadges(){}

  ChannelChatMessageEventSourceBadges(boost::json::object obj) {
    set_id = value_as_string(obj, "set_id");
    id = value_as_string(obj, "id");
    info = value_as_string(obj, "info");
  }

  std::string set_id;
  std::string id;
  std::string info;
};

class ChannelChatMessageEvent {
public:
  ChannelChatMessageEvent(){}

  ChannelChatMessageEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    chatter_user_id = value_as_string(obj, "chatter_user_id");
    chatter_user_name = value_as_string(obj, "chatter_user_name");
    chatter_user_login = value_as_string(obj, "chatter_user_login");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = ChannelChatMessageEventMessage(obj.at("message").as_object());
    }

    message_type = value_as_string(obj, "message_type");
    if (!obj["badges"].is_null()) {
      for (auto item : obj.at("badges").as_array()) {
          badge.push_back(item.as_object());
      }
    }

    if (!obj["cheer"].is_null()) {
      cheer = Cheer(obj.at("cheer").as_object());
    }

    color = value_as_string(obj, "color");
    if (!obj["reply"].is_null()) {
      reply = Reply(obj.at("reply").as_object());
    }

    channel_points_custom_reward_id = value_as_string(obj, "channel_points_custom_reward_id");
    source_broadcaster_user_id = value_as_string(obj, "source_broadcaster_user_id");
    source_broadcaster_user_name = value_as_string(obj, "source_broadcaster_user_name");
    source_broadcaster_user_login = value_as_string(obj, "source_broadcaster_user_login");
    source_message_id = value_as_string(obj, "source_message_id");
    if (!obj["source_badges"].is_null()) {
      source_badges = ChannelChatMessageEventSourceBadges(obj.at("source_badges").as_object());
    }

    is_source_only = obj.at("is_source_only").as_bool();
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string chatter_user_id;
  std::string chatter_user_name;
  std::string chatter_user_login;
  std::string message_id;
  std::optional<ChannelChatMessageEventMessage> message;
  std::string message_type;
  std::vector<ChannelChatMessageEventBadge> badge;
  std::optional<Cheer> cheer;
  std::string color;
  std::optional<Reply> reply;
  std::string channel_points_custom_reward_id;
  std::string source_broadcaster_user_id;
  std::string source_broadcaster_user_name;
  std::string source_broadcaster_user_login;
  std::string source_message_id;
  std::optional<ChannelChatMessageEventSourceBadges> source_badges;
  bool is_source_only;
};

class ChannelChatMessageDeleteEvent {
public:
  ChannelChatMessageDeleteEvent(){}

  ChannelChatMessageDeleteEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    target_user_id = value_as_string(obj, "target_user_id");
    target_user_name = value_as_string(obj, "target_user_name");
    target_user_login = value_as_string(obj, "target_user_login");
    message_id = value_as_string(obj, "message_id");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string target_user_id;
  std::string target_user_name;
  std::string target_user_login;
  std::string message_id;
};

class ChannelChatNotificationEventBadge {
public:
  ChannelChatNotificationEventBadge(){}

  ChannelChatNotificationEventBadge(boost::json::object obj) {
    set_id = value_as_string(obj, "set_id");
    id = value_as_string(obj, "id");
    info = value_as_string(obj, "info");
  }

  std::string set_id;
  std::string id;
  std::string info;
};

class Text {
public:
  Text(){}

  Text(boost::json::object obj) {
  }

};

class Prefix {
public:
  Prefix(){}

  Prefix(boost::json::object obj) {
  }

};

class ChannelChatNotificationEventCheermote {
public:
  ChannelChatNotificationEventCheermote(){}

  ChannelChatNotificationEventCheermote(boost::json::object obj) {
    if (!obj["prefix"].is_null()) {
      prefix = Prefix(obj.at("prefix").as_object());
    }

    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::optional<Prefix> prefix;
  int bits;
  int tier;
};

class ChannelChatNotificationEventEmote {
public:
  ChannelChatNotificationEventEmote(){}

  ChannelChatNotificationEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
    owner_id = value_as_string(obj, "owner_id");
    if (!obj["format"].is_null()) {
      for (auto item : obj.at("format").as_array()) {
          format.push_back(item.as_string().c_str());
      }
    }

  }

  std::string id;
  std::string emote_set_id;
  std::string owner_id;
  std::vector<std::string> format;
};

class ChannelChatNotificationEventMention {
public:
  ChannelChatNotificationEventMention(){}

  ChannelChatNotificationEventMention(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_name = value_as_string(obj, "user_name");
    user_login = value_as_string(obj, "user_login");
  }

  std::string user_id;
  std::string user_name;
  std::string user_login;
};

class ChannelChatNotificationEventFragment {
public:
  ChannelChatNotificationEventFragment(){}

  ChannelChatNotificationEventFragment(boost::json::object obj) {
    type = value_as_string(obj, "type");
    text = value_as_string(obj, "text");
    if (!obj["cheermote"].is_null()) {
      cheermote = ChannelChatNotificationEventCheermote(obj.at("cheermote").as_object());
    }

    if (!obj["emote"].is_null()) {
      emote = ChannelChatNotificationEventEmote(obj.at("emote").as_object());
    }

    if (!obj["mention"].is_null()) {
      mention = ChannelChatNotificationEventMention(obj.at("mention").as_object());
    }

  }

  std::string type;
  std::string text;
  std::optional<ChannelChatNotificationEventCheermote> cheermote;
  std::optional<ChannelChatNotificationEventEmote> emote;
  std::optional<ChannelChatNotificationEventMention> mention;
};

class ChannelChatNotificationEventMessage {
public:
  ChannelChatNotificationEventMessage(){}

  ChannelChatNotificationEventMessage(boost::json::object obj) {
    if (!obj["text"].is_null()) {
      text = Text(obj.at("text").as_object());
    }

    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::optional<Text> text;
  std::vector<ChannelChatNotificationEventFragment> fragment;
};

class Sub {
public:
  Sub(){}

  Sub(boost::json::object obj) {
    sub_tier = value_as_string(obj, "sub_tier");
    is_prime = obj.at("is_prime").as_bool();
    duration_months = value_as_int(obj, "duration_months");
  }

  std::string sub_tier;
  bool is_prime;
  int duration_months;
};

class Resub {
public:
  Resub(){}

  Resub(boost::json::object obj) {
    cumulative_months = value_as_int(obj, "cumulative_months");
    duration_months = value_as_int(obj, "duration_months");
    streak_months = value_as_int(obj, "streak_months");
    sub_tier = value_as_string(obj, "sub_tier");
    is_prime = obj.at("is_prime").as_bool();
    is_gift = obj.at("is_gift").as_bool();
    gifter_is_anonymous = obj.at("gifter_is_anonymous").as_bool();
    gifter_user_id = value_as_string(obj, "gifter_user_id");
    gifter_user_name = value_as_string(obj, "gifter_user_name");
    gifter_user_login = value_as_string(obj, "gifter_user_login");
  }

  int cumulative_months;
  int duration_months;
  int streak_months;
  std::string sub_tier;
  bool is_prime;
  bool is_gift;
  bool gifter_is_anonymous;
  std::string gifter_user_id;
  std::string gifter_user_name;
  std::string gifter_user_login;
};

class SubGift {
public:
  SubGift(){}

  SubGift(boost::json::object obj) {
    duration_months = value_as_int(obj, "duration_months");
    cumulative_total = value_as_int(obj, "cumulative_total");
    recipient_user_id = value_as_string(obj, "recipient_user_id");
    recipient_user_name = value_as_string(obj, "recipient_user_name");
    recipient_user_login = value_as_string(obj, "recipient_user_login");
    sub_tier = value_as_string(obj, "sub_tier");
    community_gift_id = value_as_string(obj, "community_gift_id");
  }

  int duration_months;
  int cumulative_total;
  std::string recipient_user_id;
  std::string recipient_user_name;
  std::string recipient_user_login;
  std::string sub_tier;
  std::string community_gift_id;
};

class CommunitySubGift {
public:
  CommunitySubGift(){}

  CommunitySubGift(boost::json::object obj) {
    id = value_as_string(obj, "id");
    total = value_as_int(obj, "total");
    sub_tier = value_as_string(obj, "sub_tier");
    cumulative_total = value_as_int(obj, "cumulative_total");
  }

  std::string id;
  int total;
  std::string sub_tier;
  int cumulative_total;
};

class GiftPaidUpgrade {
public:
  GiftPaidUpgrade(){}

  GiftPaidUpgrade(boost::json::object obj) {
    gifter_is_anonymous = obj.at("gifter_is_anonymous").as_bool();
    gifter_user_id = value_as_string(obj, "gifter_user_id");
    gifter_user_name = value_as_string(obj, "gifter_user_name");
  }

  bool gifter_is_anonymous;
  std::string gifter_user_id;
  std::string gifter_user_name;
};

class PrimePaidUpgrade {
public:
  PrimePaidUpgrade(){}

  PrimePaidUpgrade(boost::json::object obj) {
    sub_tier = value_as_string(obj, "sub_tier");
  }

  std::string sub_tier;
};

class PayItForward {
public:
  PayItForward(){}

  PayItForward(boost::json::object obj) {
    gifter_is_anonymous = obj.at("gifter_is_anonymous").as_bool();
    gifter_user_id = value_as_string(obj, "gifter_user_id");
    gifter_user_name = value_as_string(obj, "gifter_user_name");
    gifter_user_login = value_as_string(obj, "gifter_user_login");
  }

  bool gifter_is_anonymous;
  std::string gifter_user_id;
  std::string gifter_user_name;
  std::string gifter_user_login;
};

class ChannelChatNotificationEventRaid {
public:
  ChannelChatNotificationEventRaid(){}

  ChannelChatNotificationEventRaid(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_name = value_as_string(obj, "user_name");
    user_login = value_as_string(obj, "user_login");
    viewer_count = value_as_int(obj, "viewer_count");
    profile_image_url = value_as_string(obj, "profile_image_url");
  }

  std::string user_id;
  std::string user_name;
  std::string user_login;
  int viewer_count;
  std::string profile_image_url;
};

class ChannelChatNotificationEventUnraid {
public:
  ChannelChatNotificationEventUnraid(){}

  ChannelChatNotificationEventUnraid(boost::json::object obj) {
  }

};

class Announcement {
public:
  Announcement(){}

  Announcement(boost::json::object obj) {
    color = value_as_string(obj, "color");
  }

  std::string color;
};

class BitsBadgeTier {
public:
  BitsBadgeTier(){}

  BitsBadgeTier(boost::json::object obj) {
    tier = value_as_int(obj, "tier");
  }

  int tier;
};

class ChannelChatNotificationEventAmount {
public:
  ChannelChatNotificationEventAmount(){}

  ChannelChatNotificationEventAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_place = value_as_int(obj, "decimal_place");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_place;
  std::string currency;
};

class CharityDonation {
public:
  CharityDonation(){}

  CharityDonation(boost::json::object obj) {
    charity_name = value_as_string(obj, "charity_name");
    if (!obj["amount"].is_null()) {
      amount = ChannelChatNotificationEventAmount(obj.at("amount").as_object());
    }

  }

  std::string charity_name;
  std::optional<ChannelChatNotificationEventAmount> amount;
};

class WatchStreak {
public:
  WatchStreak(){}

  WatchStreak(boost::json::object obj) {
    streak_count = value_as_int(obj, "streak_count");
    channel_points_awarded = value_as_int(obj, "channel_points_awarded");
  }

  int streak_count;
  int channel_points_awarded;
};

class ChannelChatNotificationEventSourceBadges {
public:
  ChannelChatNotificationEventSourceBadges(){}

  ChannelChatNotificationEventSourceBadges(boost::json::object obj) {
    set_id = value_as_string(obj, "set_id");
    id = value_as_string(obj, "id");
    info = value_as_string(obj, "info");
  }

  std::string set_id;
  std::string id;
  std::string info;
};

class SharedChatSub {
public:
  SharedChatSub(){}

  SharedChatSub(boost::json::object obj) {
  }

};

class SharedChatResub {
public:
  SharedChatResub(){}

  SharedChatResub(boost::json::object obj) {
  }

};

class SharedChatSubGift {
public:
  SharedChatSubGift(){}

  SharedChatSubGift(boost::json::object obj) {
  }

};

class SharedChatCommunitySubGift {
public:
  SharedChatCommunitySubGift(){}

  SharedChatCommunitySubGift(boost::json::object obj) {
  }

};

class SharedChatGiftPaidUpgrade {
public:
  SharedChatGiftPaidUpgrade(){}

  SharedChatGiftPaidUpgrade(boost::json::object obj) {
  }

};

class SharedChatPrimePaidUpgrade {
public:
  SharedChatPrimePaidUpgrade(){}

  SharedChatPrimePaidUpgrade(boost::json::object obj) {
  }

};

class SharedChatPayItForward {
public:
  SharedChatPayItForward(){}

  SharedChatPayItForward(boost::json::object obj) {
  }

};

class SharedChatRaid {
public:
  SharedChatRaid(){}

  SharedChatRaid(boost::json::object obj) {
  }

};

class SharedChatAnnouncement {
public:
  SharedChatAnnouncement(){}

  SharedChatAnnouncement(boost::json::object obj) {
  }

};

class ChannelChatNotificationEvent {
public:
  ChannelChatNotificationEvent(){}

  ChannelChatNotificationEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    chatter_user_id = value_as_string(obj, "chatter_user_id");
    chatter_user_name = value_as_string(obj, "chatter_user_name");
    chatter_is_anonymous = obj.at("chatter_is_anonymous").as_bool();
    color = value_as_string(obj, "color");
    if (!obj["badges"].is_null()) {
      for (auto item : obj.at("badges").as_array()) {
          badge.push_back(item.as_object());
      }
    }

    system_message = value_as_string(obj, "system_message");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = ChannelChatNotificationEventMessage(obj.at("message").as_object());
    }

    notice_type = value_as_string(obj, "notice_type");
    if (!obj["sub"].is_null()) {
      sub = Sub(obj.at("sub").as_object());
    }

    if (!obj["resub"].is_null()) {
      resub = Resub(obj.at("resub").as_object());
    }

    if (!obj["sub_gift"].is_null()) {
      sub_gift = SubGift(obj.at("sub_gift").as_object());
    }

    if (!obj["community_sub_gift"].is_null()) {
      community_sub_gift = CommunitySubGift(obj.at("community_sub_gift").as_object());
    }

    if (!obj["gift_paid_upgrade"].is_null()) {
      gift_paid_upgrade = GiftPaidUpgrade(obj.at("gift_paid_upgrade").as_object());
    }

    if (!obj["prime_paid_upgrade"].is_null()) {
      prime_paid_upgrade = PrimePaidUpgrade(obj.at("prime_paid_upgrade").as_object());
    }

    if (!obj["pay_it_forward"].is_null()) {
      pay_it_forward = PayItForward(obj.at("pay_it_forward").as_object());
    }

    if (!obj["raid"].is_null()) {
      raid = ChannelChatNotificationEventRaid(obj.at("raid").as_object());
    }

    if (!obj["unraid"].is_null()) {
      unraid = ChannelChatNotificationEventUnraid(obj.at("unraid").as_object());
    }

    if (!obj["announcement"].is_null()) {
      announcement = Announcement(obj.at("announcement").as_object());
    }

    if (!obj["bits_badge_tier"].is_null()) {
      bits_badge_tier = BitsBadgeTier(obj.at("bits_badge_tier").as_object());
    }

    if (!obj["charity_donation"].is_null()) {
      charity_donation = CharityDonation(obj.at("charity_donation").as_object());
    }

    if (!obj["watch_streak"].is_null()) {
      watch_streak = WatchStreak(obj.at("watch_streak").as_object());
    }

    source_broadcaster_user_id = value_as_string(obj, "source_broadcaster_user_id");
    source_broadcaster_user_name = value_as_string(obj, "source_broadcaster_user_name");
    source_broadcaster_user_login = value_as_string(obj, "source_broadcaster_user_login");
    source_message_id = value_as_string(obj, "source_message_id");
    if (!obj["source_badges"].is_null()) {
      source_badges = ChannelChatNotificationEventSourceBadges(obj.at("source_badges").as_object());
    }

    is_source_only = obj.at("is_source_only").as_bool();
    if (!obj["shared_chat_sub"].is_null()) {
      shared_chat_sub = SharedChatSub(obj.at("shared_chat_sub").as_object());
    }

    if (!obj["shared_chat_resub"].is_null()) {
      shared_chat_resub = SharedChatResub(obj.at("shared_chat_resub").as_object());
    }

    if (!obj["shared_chat_sub_gift"].is_null()) {
      shared_chat_sub_gift = SharedChatSubGift(obj.at("shared_chat_sub_gift").as_object());
    }

    if (!obj["shared_chat_community_sub_gift"].is_null()) {
      shared_chat_community_sub_gift = SharedChatCommunitySubGift(obj.at("shared_chat_community_sub_gift").as_object());
    }

    if (!obj["shared_chat_gift_paid_upgrade"].is_null()) {
      shared_chat_gift_paid_upgrade = SharedChatGiftPaidUpgrade(obj.at("shared_chat_gift_paid_upgrade").as_object());
    }

    if (!obj["shared_chat_prime_paid_upgrade"].is_null()) {
      shared_chat_prime_paid_upgrade = SharedChatPrimePaidUpgrade(obj.at("shared_chat_prime_paid_upgrade").as_object());
    }

    if (!obj["shared_chat_pay_it_forward"].is_null()) {
      shared_chat_pay_it_forward = SharedChatPayItForward(obj.at("shared_chat_pay_it_forward").as_object());
    }

    if (!obj["shared_chat_raid"].is_null()) {
      shared_chat_raid = SharedChatRaid(obj.at("shared_chat_raid").as_object());
    }

    if (!obj["shared_chat_announcement"].is_null()) {
      shared_chat_announcement = SharedChatAnnouncement(obj.at("shared_chat_announcement").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string chatter_user_id;
  std::string chatter_user_name;
  bool chatter_is_anonymous;
  std::string color;
  std::vector<ChannelChatNotificationEventBadge> badge;
  std::string system_message;
  std::string message_id;
  std::optional<ChannelChatNotificationEventMessage> message;
  std::string notice_type;
  std::optional<Sub> sub;
  std::optional<Resub> resub;
  std::optional<SubGift> sub_gift;
  std::optional<CommunitySubGift> community_sub_gift;
  std::optional<GiftPaidUpgrade> gift_paid_upgrade;
  std::optional<PrimePaidUpgrade> prime_paid_upgrade;
  std::optional<PayItForward> pay_it_forward;
  std::optional<ChannelChatNotificationEventRaid> raid;
  std::optional<ChannelChatNotificationEventUnraid> unraid;
  std::optional<Announcement> announcement;
  std::optional<BitsBadgeTier> bits_badge_tier;
  std::optional<CharityDonation> charity_donation;
  std::optional<WatchStreak> watch_streak;
  std::string source_broadcaster_user_id;
  std::string source_broadcaster_user_name;
  std::string source_broadcaster_user_login;
  std::string source_message_id;
  std::optional<ChannelChatNotificationEventSourceBadges> source_badges;
  bool is_source_only;
  std::optional<SharedChatSub> shared_chat_sub;
  std::optional<SharedChatResub> shared_chat_resub;
  std::optional<SharedChatSubGift> shared_chat_sub_gift;
  std::optional<SharedChatCommunitySubGift> shared_chat_community_sub_gift;
  std::optional<SharedChatGiftPaidUpgrade> shared_chat_gift_paid_upgrade;
  std::optional<SharedChatPrimePaidUpgrade> shared_chat_prime_paid_upgrade;
  std::optional<SharedChatPayItForward> shared_chat_pay_it_forward;
  std::optional<SharedChatRaid> shared_chat_raid;
  std::optional<SharedChatAnnouncement> shared_chat_announcement;
};

class ChannelChatSettingsUpdateEvent {
public:
  ChannelChatSettingsUpdateEvent(){}

  ChannelChatSettingsUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    emote_mode = obj.at("emote_mode").as_bool();
    follower_mode = obj.at("follower_mode").as_bool();
    follower_mode_duration_minutes = value_as_int(obj, "follower_mode_duration_minutes");
    slow_mode = obj.at("slow_mode").as_bool();
    slow_mode_wait_time_seconds = value_as_int(obj, "slow_mode_wait_time_seconds");
    subscriber_mode = obj.at("subscriber_mode").as_bool();
    unique_chat_mode = obj.at("unique_chat_mode").as_bool();
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  bool emote_mode;
  bool follower_mode;
  int follower_mode_duration_minutes;
  bool slow_mode;
  int slow_mode_wait_time_seconds;
  bool subscriber_mode;
  bool unique_chat_mode;
};

class ChannelChatUserMessageHoldEventEmote {
public:
  ChannelChatUserMessageHoldEventEmote(){}

  ChannelChatUserMessageHoldEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
  }

  std::string id;
  std::string emote_set_id;
};

class ChannelChatUserMessageHoldEventCheermote {
public:
  ChannelChatUserMessageHoldEventCheermote(){}

  ChannelChatUserMessageHoldEventCheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class ChannelChatUserMessageHoldEventFragment {
public:
  ChannelChatUserMessageHoldEventFragment(){}

  ChannelChatUserMessageHoldEventFragment(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["emote"].is_null()) {
      emote = ChannelChatUserMessageHoldEventEmote(obj.at("emote").as_object());
    }

    if (!obj["cheermote"].is_null()) {
      cheermote = ChannelChatUserMessageHoldEventCheermote(obj.at("cheermote").as_object());
    }

  }

  std::string text;
  std::optional<ChannelChatUserMessageHoldEventEmote> emote;
  std::optional<ChannelChatUserMessageHoldEventCheermote> cheermote;
};

class ChannelChatUserMessageHoldEventMessage {
public:
  ChannelChatUserMessageHoldEventMessage(){}

  ChannelChatUserMessageHoldEventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<ChannelChatUserMessageHoldEventFragment> fragment;
};

class ChannelChatUserMessageHoldEvent {
public:
  ChannelChatUserMessageHoldEvent(){}

  ChannelChatUserMessageHoldEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = ChannelChatUserMessageHoldEventMessage(obj.at("message").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string message_id;
  std::optional<ChannelChatUserMessageHoldEventMessage> message;
};

class ChannelChatUserMessageUpdateEventEmote {
public:
  ChannelChatUserMessageUpdateEventEmote(){}

  ChannelChatUserMessageUpdateEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
  }

  std::string id;
  std::string emote_set_id;
};

class ChannelChatUserMessageUpdateEventCheermote {
public:
  ChannelChatUserMessageUpdateEventCheermote(){}

  ChannelChatUserMessageUpdateEventCheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_int(obj, "bits");
    tier = value_as_int(obj, "tier");
  }

  std::string prefix;
  int bits;
  int tier;
};

class ChannelChatUserMessageUpdateEventFragment {
public:
  ChannelChatUserMessageUpdateEventFragment(){}

  ChannelChatUserMessageUpdateEventFragment(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["emote"].is_null()) {
      emote = ChannelChatUserMessageUpdateEventEmote(obj.at("emote").as_object());
    }

    if (!obj["cheermote"].is_null()) {
      cheermote = ChannelChatUserMessageUpdateEventCheermote(obj.at("cheermote").as_object());
    }

  }

  std::string text;
  std::optional<ChannelChatUserMessageUpdateEventEmote> emote;
  std::optional<ChannelChatUserMessageUpdateEventCheermote> cheermote;
};

class ChannelChatUserMessageUpdateEventMessage {
public:
  ChannelChatUserMessageUpdateEventMessage(){}

  ChannelChatUserMessageUpdateEventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<ChannelChatUserMessageUpdateEventFragment> fragment;
};

class ChannelChatUserMessageUpdateEvent {
public:
  ChannelChatUserMessageUpdateEvent(){}

  ChannelChatUserMessageUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    status = value_as_string(obj, "status");
    message_id = value_as_string(obj, "message_id");
    if (!obj["message"].is_null()) {
      message = ChannelChatUserMessageUpdateEventMessage(obj.at("message").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string status;
  std::string message_id;
  std::optional<ChannelChatUserMessageUpdateEventMessage> message;
};

class ChannelSubscribeEvent {
public:
  ChannelSubscribeEvent(){}

  ChannelSubscribeEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    tier = value_as_string(obj, "tier");
    is_gift = obj.at("is_gift").as_bool();
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string tier;
  bool is_gift;
};

class ChannelCheerEvent {
public:
  ChannelCheerEvent(){}

  ChannelCheerEvent(boost::json::object obj) {
    is_anonymous = obj.at("is_anonymous").as_bool();
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    message = value_as_string(obj, "message");
    bits = value_as_int(obj, "bits");
  }

  bool is_anonymous;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string message;
  int bits;
};

class ChannelUpdateEvent {
public:
  ChannelUpdateEvent(){}

  ChannelUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    language = value_as_string(obj, "language");
    category_id = value_as_string(obj, "category_id");
    category_name = value_as_string(obj, "category_name");
    if (!obj["content_classification_labels"].is_null()) {
      for (auto item : obj.at("content_classification_labels").as_array()) {
          content_classification_labels.push_back(item.as_string().c_str());
      }
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::string language;
  std::string category_id;
  std::string category_name;
  std::vector<std::string> content_classification_labels;
};

class ChannelUnbanEvent {
public:
  ChannelUnbanEvent(){}

  ChannelUnbanEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
};

class ChannelUnbanRequestCreateEvent {
public:
  ChannelUnbanRequestCreateEvent(){}

  ChannelUnbanRequestCreateEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    text = value_as_string(obj, "text");
    created_at = value_as_string(obj, "created_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string text;
  std::string created_at;
};

class ChannelUnbanRequestResolveEvent {
public:
  ChannelUnbanRequestResolveEvent(){}

  ChannelUnbanRequestResolveEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    moderator_id = value_as_string(obj, "moderator_id");
    moderator_login = value_as_string(obj, "moderator_login");
    moderator_name = value_as_string(obj, "moderator_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    resolution_text = value_as_string(obj, "resolution_text");
    status = value_as_string(obj, "status");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string moderator_id;
  std::string moderator_login;
  std::string moderator_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string resolution_text;
  std::string status;
};

class ChannelFollowEvent {
public:
  ChannelFollowEvent(){}

  ChannelFollowEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    followed_at = value_as_string(obj, "followed_at");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string followed_at;
};

class ChannelRaidEvent {
public:
  ChannelRaidEvent(){}

  ChannelRaidEvent(boost::json::object obj) {
    from_broadcaster_user_id = value_as_string(obj, "from_broadcaster_user_id");
    from_broadcaster_user_login = value_as_string(obj, "from_broadcaster_user_login");
    from_broadcaster_user_name = value_as_string(obj, "from_broadcaster_user_name");
    to_broadcaster_user_id = value_as_string(obj, "to_broadcaster_user_id");
    to_broadcaster_user_login = value_as_string(obj, "to_broadcaster_user_login");
    to_broadcaster_user_name = value_as_string(obj, "to_broadcaster_user_name");
    viewers = value_as_int(obj, "viewers");
  }

  std::string from_broadcaster_user_id;
  std::string from_broadcaster_user_login;
  std::string from_broadcaster_user_name;
  std::string to_broadcaster_user_id;
  std::string to_broadcaster_user_login;
  std::string to_broadcaster_user_name;
  int viewers;
};

class ChannelModerateEventFollowers {
public:
  ChannelModerateEventFollowers(){}

  ChannelModerateEventFollowers(boost::json::object obj) {
    follow_duration_minutes = value_as_int(obj, "follow_duration_minutes");
  }

  int follow_duration_minutes;
};

class ChannelModerateEventSlow {
public:
  ChannelModerateEventSlow(){}

  ChannelModerateEventSlow(boost::json::object obj) {
    wait_time_seconds = value_as_int(obj, "wait_time_seconds");
  }

  int wait_time_seconds;
};

class ChannelModerateEventVip {
public:
  ChannelModerateEventVip(){}

  ChannelModerateEventVip(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventUnvip {
public:
  ChannelModerateEventUnvip(){}

  ChannelModerateEventUnvip(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventMod {
public:
  ChannelModerateEventMod(){}

  ChannelModerateEventMod(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventUnmod {
public:
  ChannelModerateEventUnmod(){}

  ChannelModerateEventUnmod(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventBan {
public:
  ChannelModerateEventBan(){}

  ChannelModerateEventBan(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    reason = value_as_string(obj, "reason");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string reason;
};

class ChannelModerateEventUnban {
public:
  ChannelModerateEventUnban(){}

  ChannelModerateEventUnban(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventTimeout {
public:
  ChannelModerateEventTimeout(){}

  ChannelModerateEventTimeout(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    reason = value_as_string(obj, "reason");
    expires_at = value_as_string(obj, "expires_at");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string reason;
  std::string expires_at;
};

class ChannelModerateEventUntimeout {
public:
  ChannelModerateEventUntimeout(){}

  ChannelModerateEventUntimeout(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventRaid {
public:
  ChannelModerateEventRaid(){}

  ChannelModerateEventRaid(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    viewer_count = value_as_int(obj, "viewer_count");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  int viewer_count;
};

class ChannelModerateEventUnraid {
public:
  ChannelModerateEventUnraid(){}

  ChannelModerateEventUnraid(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventDelete {
public:
  ChannelModerateEventDelete(){}

  ChannelModerateEventDelete(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    message_id = value_as_string(obj, "message_id");
    message_body = value_as_string(obj, "message_body");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string message_id;
  std::string message_body;
};

class ChannelModerateEventAutomodTerms {
public:
  ChannelModerateEventAutomodTerms(){}

  ChannelModerateEventAutomodTerms(boost::json::object obj) {
    action = value_as_string(obj, "action");
    list = value_as_string(obj, "list");
    if (!obj["terms"].is_null()) {
      for (auto item : obj.at("terms").as_array()) {
          terms.push_back(item.as_string().c_str());
      }
    }

    from_automod = obj.at("from_automod").as_bool();
  }

  std::string action;
  std::string list;
  std::vector<std::string> terms;
  bool from_automod;
};

class ChannelModerateEventUnbanRequest {
public:
  ChannelModerateEventUnbanRequest(){}

  ChannelModerateEventUnbanRequest(boost::json::object obj) {
    is_approved = obj.at("is_approved").as_bool();
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    moderator_message = value_as_string(obj, "moderator_message");
  }

  bool is_approved;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string moderator_message;
};

class ChannelModerateEventSharedChatBan {
public:
  ChannelModerateEventSharedChatBan(){}

  ChannelModerateEventSharedChatBan(boost::json::object obj) {
  }

};

class ChannelModerateEventSharedChatUnban {
public:
  ChannelModerateEventSharedChatUnban(){}

  ChannelModerateEventSharedChatUnban(boost::json::object obj) {
  }

};

class ChannelModerateEventSharedChatTimeout {
public:
  ChannelModerateEventSharedChatTimeout(){}

  ChannelModerateEventSharedChatTimeout(boost::json::object obj) {
  }

};

class ChannelModerateEventSharedChatUntimeout {
public:
  ChannelModerateEventSharedChatUntimeout(){}

  ChannelModerateEventSharedChatUntimeout(boost::json::object obj) {
  }

};

class ChannelModerateEventSharedChatDelete {
public:
  ChannelModerateEventSharedChatDelete(){}

  ChannelModerateEventSharedChatDelete(boost::json::object obj) {
  }

};

class ChannelModerateEvent {
public:
  ChannelModerateEvent(){}

  ChannelModerateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    source_broadcaster_user_id = value_as_string(obj, "source_broadcaster_user_id");
    source_broadcaster_user_login = value_as_string(obj, "source_broadcaster_user_login");
    source_broadcaster_user_name = value_as_string(obj, "source_broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    action = value_as_string(obj, "action");
    if (!obj["followers"].is_null()) {
      followers = ChannelModerateEventFollowers(obj.at("followers").as_object());
    }

    if (!obj["slow"].is_null()) {
      slow = ChannelModerateEventSlow(obj.at("slow").as_object());
    }

    if (!obj["vip"].is_null()) {
      vip = ChannelModerateEventVip(obj.at("vip").as_object());
    }

    if (!obj["unvip"].is_null()) {
      unvip = ChannelModerateEventUnvip(obj.at("unvip").as_object());
    }

    if (!obj["mod"].is_null()) {
      mod = ChannelModerateEventMod(obj.at("mod").as_object());
    }

    if (!obj["unmod"].is_null()) {
      unmod = ChannelModerateEventUnmod(obj.at("unmod").as_object());
    }

    if (!obj["ban"].is_null()) {
      ban = ChannelModerateEventBan(obj.at("ban").as_object());
    }

    if (!obj["unban"].is_null()) {
      unban = ChannelModerateEventUnban(obj.at("unban").as_object());
    }

    if (!obj["timeout"].is_null()) {
      timeout = ChannelModerateEventTimeout(obj.at("timeout").as_object());
    }

    if (!obj["untimeout"].is_null()) {
      untimeout = ChannelModerateEventUntimeout(obj.at("untimeout").as_object());
    }

    if (!obj["raid"].is_null()) {
      raid = ChannelModerateEventRaid(obj.at("raid").as_object());
    }

    if (!obj["unraid"].is_null()) {
      unraid = ChannelModerateEventUnraid(obj.at("unraid").as_object());
    }

    if (!obj["delete_"].is_null()) {
      delete_ = ChannelModerateEventDelete(obj.at("delete_").as_object());
    }

    if (!obj["automod_terms"].is_null()) {
      automod_terms = ChannelModerateEventAutomodTerms(obj.at("automod_terms").as_object());
    }

    if (!obj["unban_request"].is_null()) {
      unban_request = ChannelModerateEventUnbanRequest(obj.at("unban_request").as_object());
    }

    if (!obj["shared_chat_ban"].is_null()) {
      shared_chat_ban = ChannelModerateEventSharedChatBan(obj.at("shared_chat_ban").as_object());
    }

    if (!obj["shared_chat_unban"].is_null()) {
      shared_chat_unban = ChannelModerateEventSharedChatUnban(obj.at("shared_chat_unban").as_object());
    }

    if (!obj["shared_chat_timeout"].is_null()) {
      shared_chat_timeout = ChannelModerateEventSharedChatTimeout(obj.at("shared_chat_timeout").as_object());
    }

    if (!obj["shared_chat_untimeout"].is_null()) {
      shared_chat_untimeout = ChannelModerateEventSharedChatUntimeout(obj.at("shared_chat_untimeout").as_object());
    }

    if (!obj["shared_chat_delete"].is_null()) {
      shared_chat_delete = ChannelModerateEventSharedChatDelete(obj.at("shared_chat_delete").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string source_broadcaster_user_id;
  std::string source_broadcaster_user_login;
  std::string source_broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  std::string action;
  std::optional<ChannelModerateEventFollowers> followers;
  std::optional<ChannelModerateEventSlow> slow;
  std::optional<ChannelModerateEventVip> vip;
  std::optional<ChannelModerateEventUnvip> unvip;
  std::optional<ChannelModerateEventMod> mod;
  std::optional<ChannelModerateEventUnmod> unmod;
  std::optional<ChannelModerateEventBan> ban;
  std::optional<ChannelModerateEventUnban> unban;
  std::optional<ChannelModerateEventTimeout> timeout;
  std::optional<ChannelModerateEventUntimeout> untimeout;
  std::optional<ChannelModerateEventRaid> raid;
  std::optional<ChannelModerateEventUnraid> unraid;
  std::optional<ChannelModerateEventDelete> delete_;
  std::optional<ChannelModerateEventAutomodTerms> automod_terms;
  std::optional<ChannelModerateEventUnbanRequest> unban_request;
  std::optional<ChannelModerateEventSharedChatBan> shared_chat_ban;
  std::optional<ChannelModerateEventSharedChatUnban> shared_chat_unban;
  std::optional<ChannelModerateEventSharedChatTimeout> shared_chat_timeout;
  std::optional<ChannelModerateEventSharedChatUntimeout> shared_chat_untimeout;
  std::optional<ChannelModerateEventSharedChatDelete> shared_chat_delete;
};

class ChannelModerateEventV2Followers {
public:
  ChannelModerateEventV2Followers(){}

  ChannelModerateEventV2Followers(boost::json::object obj) {
    follow_duration_minutes = value_as_int(obj, "follow_duration_minutes");
  }

  int follow_duration_minutes;
};

class ChannelModerateEventV2Slow {
public:
  ChannelModerateEventV2Slow(){}

  ChannelModerateEventV2Slow(boost::json::object obj) {
    wait_time_seconds = value_as_int(obj, "wait_time_seconds");
  }

  int wait_time_seconds;
};

class ChannelModerateEventV2Vip {
public:
  ChannelModerateEventV2Vip(){}

  ChannelModerateEventV2Vip(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventV2Unvip {
public:
  ChannelModerateEventV2Unvip(){}

  ChannelModerateEventV2Unvip(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventV2Mod {
public:
  ChannelModerateEventV2Mod(){}

  ChannelModerateEventV2Mod(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventV2Unmod {
public:
  ChannelModerateEventV2Unmod(){}

  ChannelModerateEventV2Unmod(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventV2Ban {
public:
  ChannelModerateEventV2Ban(){}

  ChannelModerateEventV2Ban(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    reason = value_as_string(obj, "reason");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string reason;
};

class ChannelModerateEventV2Unban {
public:
  ChannelModerateEventV2Unban(){}

  ChannelModerateEventV2Unban(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventV2Timeout {
public:
  ChannelModerateEventV2Timeout(){}

  ChannelModerateEventV2Timeout(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    reason = value_as_string(obj, "reason");
    expires_at = value_as_string(obj, "expires_at");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string reason;
  std::string expires_at;
};

class ChannelModerateEventV2Untimeout {
public:
  ChannelModerateEventV2Untimeout(){}

  ChannelModerateEventV2Untimeout(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventV2Raid {
public:
  ChannelModerateEventV2Raid(){}

  ChannelModerateEventV2Raid(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    viewer_count = value_as_int(obj, "viewer_count");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  int viewer_count;
};

class ChannelModerateEventV2Unraid {
public:
  ChannelModerateEventV2Unraid(){}

  ChannelModerateEventV2Unraid(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModerateEventV2Delete {
public:
  ChannelModerateEventV2Delete(){}

  ChannelModerateEventV2Delete(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    message_id = value_as_string(obj, "message_id");
    message_body = value_as_string(obj, "message_body");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string message_id;
  std::string message_body;
};

class ChannelModerateEventV2AutomodTerms {
public:
  ChannelModerateEventV2AutomodTerms(){}

  ChannelModerateEventV2AutomodTerms(boost::json::object obj) {
    action = value_as_string(obj, "action");
    list = value_as_string(obj, "list");
    if (!obj["terms"].is_null()) {
      for (auto item : obj.at("terms").as_array()) {
          terms.push_back(item.as_string().c_str());
      }
    }

    from_automod = obj.at("from_automod").as_bool();
  }

  std::string action;
  std::string list;
  std::vector<std::string> terms;
  bool from_automod;
};

class ChannelModerateEventV2UnbanRequest {
public:
  ChannelModerateEventV2UnbanRequest(){}

  ChannelModerateEventV2UnbanRequest(boost::json::object obj) {
    is_approved = obj.at("is_approved").as_bool();
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    moderator_message = value_as_string(obj, "moderator_message");
  }

  bool is_approved;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string moderator_message;
};

class Warn {
public:
  Warn(){}

  Warn(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    reason = value_as_string(obj, "reason");
    if (!obj["chat_rules_cited"].is_null()) {
      for (auto item : obj.at("chat_rules_cited").as_array()) {
          chat_rules_cited.push_back(item.as_string().c_str());
      }
    }

  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string reason;
  std::vector<std::string> chat_rules_cited;
};

class ChannelModerateEventV2SharedChatBan {
public:
  ChannelModerateEventV2SharedChatBan(){}

  ChannelModerateEventV2SharedChatBan(boost::json::object obj) {
  }

};

class ChannelModerateEventV2SharedChatUnban {
public:
  ChannelModerateEventV2SharedChatUnban(){}

  ChannelModerateEventV2SharedChatUnban(boost::json::object obj) {
  }

};

class ChannelModerateEventV2SharedChatTimeout {
public:
  ChannelModerateEventV2SharedChatTimeout(){}

  ChannelModerateEventV2SharedChatTimeout(boost::json::object obj) {
  }

};

class ChannelModerateEventV2SharedChatUntimeout {
public:
  ChannelModerateEventV2SharedChatUntimeout(){}

  ChannelModerateEventV2SharedChatUntimeout(boost::json::object obj) {
  }

};

class ChannelModerateEventV2SharedChatDelete {
public:
  ChannelModerateEventV2SharedChatDelete(){}

  ChannelModerateEventV2SharedChatDelete(boost::json::object obj) {
  }

};

class ChannelModerateEventV2 {
public:
  ChannelModerateEventV2(){}

  ChannelModerateEventV2(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    source_broadcaster_user_id = value_as_string(obj, "source_broadcaster_user_id");
    source_broadcaster_user_login = value_as_string(obj, "source_broadcaster_user_login");
    source_broadcaster_user_name = value_as_string(obj, "source_broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    action = value_as_string(obj, "action");
    if (!obj["followers"].is_null()) {
      followers = ChannelModerateEventV2Followers(obj.at("followers").as_object());
    }

    if (!obj["slow"].is_null()) {
      slow = ChannelModerateEventV2Slow(obj.at("slow").as_object());
    }

    if (!obj["vip"].is_null()) {
      vip = ChannelModerateEventV2Vip(obj.at("vip").as_object());
    }

    if (!obj["unvip"].is_null()) {
      unvip = ChannelModerateEventV2Unvip(obj.at("unvip").as_object());
    }

    if (!obj["mod"].is_null()) {
      mod = ChannelModerateEventV2Mod(obj.at("mod").as_object());
    }

    if (!obj["unmod"].is_null()) {
      unmod = ChannelModerateEventV2Unmod(obj.at("unmod").as_object());
    }

    if (!obj["ban"].is_null()) {
      ban = ChannelModerateEventV2Ban(obj.at("ban").as_object());
    }

    if (!obj["unban"].is_null()) {
      unban = ChannelModerateEventV2Unban(obj.at("unban").as_object());
    }

    if (!obj["timeout"].is_null()) {
      timeout = ChannelModerateEventV2Timeout(obj.at("timeout").as_object());
    }

    if (!obj["untimeout"].is_null()) {
      untimeout = ChannelModerateEventV2Untimeout(obj.at("untimeout").as_object());
    }

    if (!obj["raid"].is_null()) {
      raid = ChannelModerateEventV2Raid(obj.at("raid").as_object());
    }

    if (!obj["unraid"].is_null()) {
      unraid = ChannelModerateEventV2Unraid(obj.at("unraid").as_object());
    }

    if (!obj["delete_"].is_null()) {
      delete_ = ChannelModerateEventV2Delete(obj.at("delete_").as_object());
    }

    if (!obj["automod_terms"].is_null()) {
      automod_terms = ChannelModerateEventV2AutomodTerms(obj.at("automod_terms").as_object());
    }

    if (!obj["unban_request"].is_null()) {
      unban_request = ChannelModerateEventV2UnbanRequest(obj.at("unban_request").as_object());
    }

    if (!obj["warn"].is_null()) {
      warn = Warn(obj.at("warn").as_object());
    }

    if (!obj["shared_chat_ban"].is_null()) {
      shared_chat_ban = ChannelModerateEventV2SharedChatBan(obj.at("shared_chat_ban").as_object());
    }

    if (!obj["shared_chat_unban"].is_null()) {
      shared_chat_unban = ChannelModerateEventV2SharedChatUnban(obj.at("shared_chat_unban").as_object());
    }

    if (!obj["shared_chat_timeout"].is_null()) {
      shared_chat_timeout = ChannelModerateEventV2SharedChatTimeout(obj.at("shared_chat_timeout").as_object());
    }

    if (!obj["shared_chat_untimeout"].is_null()) {
      shared_chat_untimeout = ChannelModerateEventV2SharedChatUntimeout(obj.at("shared_chat_untimeout").as_object());
    }

    if (!obj["shared_chat_delete"].is_null()) {
      shared_chat_delete = ChannelModerateEventV2SharedChatDelete(obj.at("shared_chat_delete").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string source_broadcaster_user_id;
  std::string source_broadcaster_user_login;
  std::string source_broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  std::string action;
  std::optional<ChannelModerateEventV2Followers> followers;
  std::optional<ChannelModerateEventV2Slow> slow;
  std::optional<ChannelModerateEventV2Vip> vip;
  std::optional<ChannelModerateEventV2Unvip> unvip;
  std::optional<ChannelModerateEventV2Mod> mod;
  std::optional<ChannelModerateEventV2Unmod> unmod;
  std::optional<ChannelModerateEventV2Ban> ban;
  std::optional<ChannelModerateEventV2Unban> unban;
  std::optional<ChannelModerateEventV2Timeout> timeout;
  std::optional<ChannelModerateEventV2Untimeout> untimeout;
  std::optional<ChannelModerateEventV2Raid> raid;
  std::optional<ChannelModerateEventV2Unraid> unraid;
  std::optional<ChannelModerateEventV2Delete> delete_;
  std::optional<ChannelModerateEventV2AutomodTerms> automod_terms;
  std::optional<ChannelModerateEventV2UnbanRequest> unban_request;
  std::optional<Warn> warn;
  std::optional<ChannelModerateEventV2SharedChatBan> shared_chat_ban;
  std::optional<ChannelModerateEventV2SharedChatUnban> shared_chat_unban;
  std::optional<ChannelModerateEventV2SharedChatTimeout> shared_chat_timeout;
  std::optional<ChannelModerateEventV2SharedChatUntimeout> shared_chat_untimeout;
  std::optional<ChannelModerateEventV2SharedChatDelete> shared_chat_delete;
};

class ChannelModeratorAddEvent {
public:
  ChannelModeratorAddEvent(){}

  ChannelModeratorAddEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelModeratorRemoveEvent {
public:
  ChannelModeratorRemoveEvent(){}

  ChannelModeratorRemoveEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelGuestStarSessionBeginEvent {
public:
  ChannelGuestStarSessionBeginEvent(){}

  ChannelGuestStarSessionBeginEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    session_id = value_as_string(obj, "session_id");
    started_at = value_as_string(obj, "started_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string session_id;
  std::string started_at;
};

class ChannelGuestStarSessionEndEvent {
public:
  ChannelGuestStarSessionEndEvent(){}

  ChannelGuestStarSessionEndEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    session_id = value_as_string(obj, "session_id");
    started_at = value_as_string(obj, "started_at");
    ended_at = value_as_string(obj, "ended_at");
    host_user_id = value_as_string(obj, "host_user_id");
    host_user_name = value_as_string(obj, "host_user_name");
    host_user_login = value_as_string(obj, "host_user_login");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string session_id;
  std::string started_at;
  std::string ended_at;
  std::string host_user_id;
  std::string host_user_name;
  std::string host_user_login;
};

class ChannelGuestStarGuestUpdateEvent {
public:
  ChannelGuestStarGuestUpdateEvent(){}

  ChannelGuestStarGuestUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    session_id = value_as_string(obj, "session_id");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    guest_user_id = value_as_string(obj, "guest_user_id");
    guest_user_name = value_as_string(obj, "guest_user_name");
    guest_user_login = value_as_string(obj, "guest_user_login");
    slot_id = value_as_string(obj, "slot_id");
    state = value_as_string(obj, "state");
    host_user_id = value_as_string(obj, "host_user_id");
    host_user_name = value_as_string(obj, "host_user_name");
    host_user_login = value_as_string(obj, "host_user_login");
    host_video_enabled = obj.at("host_video_enabled").as_bool();
    host_audio_enabled = obj.at("host_audio_enabled").as_bool();
    host_volume = value_as_int(obj, "host_volume");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string session_id;
  std::string moderator_user_id;
  std::string moderator_user_name;
  std::string moderator_user_login;
  std::string guest_user_id;
  std::string guest_user_name;
  std::string guest_user_login;
  std::string slot_id;
  std::string state;
  std::string host_user_id;
  std::string host_user_name;
  std::string host_user_login;
  bool host_video_enabled;
  bool host_audio_enabled;
  int host_volume;
};

class ChannelGuestStarSettingsUpdateEvent {
public:
  ChannelGuestStarSettingsUpdateEvent(){}

  ChannelGuestStarSettingsUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    is_moderator_send_live_enabled = obj.at("is_moderator_send_live_enabled").as_bool();
    slot_count = value_as_int(obj, "slot_count");
    is_browser_source_audio_enabled = obj.at("is_browser_source_audio_enabled").as_bool();
    group_layout = value_as_string(obj, "group_layout");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  bool is_moderator_send_live_enabled;
  int slot_count;
  bool is_browser_source_audio_enabled;
  std::string group_layout;
};

class ChannelPollBeginEventChoice {
public:
  ChannelPollBeginEventChoice(){}

  ChannelPollBeginEventChoice(boost::json::object obj) {
  }

};

class ChannelPollBeginEventBitsVoting {
public:
  ChannelPollBeginEventBitsVoting(){}

  ChannelPollBeginEventBitsVoting(boost::json::object obj) {
  }

};

class ChannelPollBeginEventChannelPointsVoting {
public:
  ChannelPollBeginEventChannelPointsVoting(){}

  ChannelPollBeginEventChannelPointsVoting(boost::json::object obj) {
  }

};

class ChannelPollBeginEvent {
public:
  ChannelPollBeginEvent(){}

  ChannelPollBeginEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    if (!obj["choices"].is_null()) {
      for (auto item : obj.at("choices").as_array()) {
          choice.push_back(item.as_object());
      }
    }

    if (!obj["bits_voting"].is_null()) {
      bits_voting = ChannelPollBeginEventBitsVoting(obj.at("bits_voting").as_object());
    }

    if (!obj["channel_points_voting"].is_null()) {
      channel_points_voting = ChannelPollBeginEventChannelPointsVoting(obj.at("channel_points_voting").as_object());
    }

    started_at = value_as_string(obj, "started_at");
    ends_at = value_as_string(obj, "ends_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::vector<ChannelPollBeginEventChoice> choice;
  std::optional<ChannelPollBeginEventBitsVoting> bits_voting;
  std::optional<ChannelPollBeginEventChannelPointsVoting> channel_points_voting;
  std::string started_at;
  std::string ends_at;
};

class ChannelPollProgressEventChoice {
public:
  ChannelPollProgressEventChoice(){}

  ChannelPollProgressEventChoice(boost::json::object obj) {
  }

};

class ChannelPollProgressEventBitsVoting {
public:
  ChannelPollProgressEventBitsVoting(){}

  ChannelPollProgressEventBitsVoting(boost::json::object obj) {
  }

};

class ChannelPollProgressEventChannelPointsVoting {
public:
  ChannelPollProgressEventChannelPointsVoting(){}

  ChannelPollProgressEventChannelPointsVoting(boost::json::object obj) {
  }

};

class ChannelPollProgressEvent {
public:
  ChannelPollProgressEvent(){}

  ChannelPollProgressEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    if (!obj["choices"].is_null()) {
      for (auto item : obj.at("choices").as_array()) {
          choice.push_back(item.as_object());
      }
    }

    if (!obj["bits_voting"].is_null()) {
      bits_voting = ChannelPollProgressEventBitsVoting(obj.at("bits_voting").as_object());
    }

    if (!obj["channel_points_voting"].is_null()) {
      channel_points_voting = ChannelPollProgressEventChannelPointsVoting(obj.at("channel_points_voting").as_object());
    }

    started_at = value_as_string(obj, "started_at");
    ends_at = value_as_string(obj, "ends_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::vector<ChannelPollProgressEventChoice> choice;
  std::optional<ChannelPollProgressEventBitsVoting> bits_voting;
  std::optional<ChannelPollProgressEventChannelPointsVoting> channel_points_voting;
  std::string started_at;
  std::string ends_at;
};

class ChannelPollEndEventChoice {
public:
  ChannelPollEndEventChoice(){}

  ChannelPollEndEventChoice(boost::json::object obj) {
  }

};

class ChannelPollEndEventBitsVoting {
public:
  ChannelPollEndEventBitsVoting(){}

  ChannelPollEndEventBitsVoting(boost::json::object obj) {
  }

};

class ChannelPollEndEventChannelPointsVoting {
public:
  ChannelPollEndEventChannelPointsVoting(){}

  ChannelPollEndEventChannelPointsVoting(boost::json::object obj) {
  }

};

class ChannelPollEndEvent {
public:
  ChannelPollEndEvent(){}

  ChannelPollEndEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    if (!obj["choices"].is_null()) {
      for (auto item : obj.at("choices").as_array()) {
          choice.push_back(item.as_object());
      }
    }

    if (!obj["bits_voting"].is_null()) {
      bits_voting = ChannelPollEndEventBitsVoting(obj.at("bits_voting").as_object());
    }

    if (!obj["channel_points_voting"].is_null()) {
      channel_points_voting = ChannelPollEndEventChannelPointsVoting(obj.at("channel_points_voting").as_object());
    }

    status = value_as_string(obj, "status");
    started_at = value_as_string(obj, "started_at");
    ended_at = value_as_string(obj, "ended_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::vector<ChannelPollEndEventChoice> choice;
  std::optional<ChannelPollEndEventBitsVoting> bits_voting;
  std::optional<ChannelPollEndEventChannelPointsVoting> channel_points_voting;
  std::string status;
  std::string started_at;
  std::string ended_at;
};

class UnlockedEmote {
public:
  UnlockedEmote(){}

  UnlockedEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    name = value_as_string(obj, "name");
  }

  std::string id;
  std::string name;
};

class ChannelPointsAutomaticRewardRedemptionAddEventReward {
public:
  ChannelPointsAutomaticRewardRedemptionAddEventReward(){}

  ChannelPointsAutomaticRewardRedemptionAddEventReward(boost::json::object obj) {
    type = value_as_string(obj, "type");
    cost = value_as_int(obj, "cost");
    if (!obj["unlocked_emote"].is_null()) {
      unlocked_emote = UnlockedEmote(obj.at("unlocked_emote").as_object());
    }

  }

  std::string type;
  int cost;
  std::optional<UnlockedEmote> unlocked_emote;
};

class ChannelPointsAutomaticRewardRedemptionAddEventEmote {
public:
  ChannelPointsAutomaticRewardRedemptionAddEventEmote(){}

  ChannelPointsAutomaticRewardRedemptionAddEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    begin = value_as_int(obj, "begin");
    end = value_as_int(obj, "end");
  }

  std::string id;
  int begin;
  int end;
};

class ChannelPointsAutomaticRewardRedemptionAddEventMessage {
public:
  ChannelPointsAutomaticRewardRedemptionAddEventMessage(){}

  ChannelPointsAutomaticRewardRedemptionAddEventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["emotes"].is_null()) {
      for (auto item : obj.at("emotes").as_array()) {
          emote.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<ChannelPointsAutomaticRewardRedemptionAddEventEmote> emote;
};

class ChannelPointsAutomaticRewardRedemptionAddEvent {
public:
  ChannelPointsAutomaticRewardRedemptionAddEvent(){}

  ChannelPointsAutomaticRewardRedemptionAddEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    id = value_as_string(obj, "id");
    if (!obj["reward"].is_null()) {
      reward = ChannelPointsAutomaticRewardRedemptionAddEventReward(obj.at("reward").as_object());
    }

    if (!obj["message"].is_null()) {
      message = ChannelPointsAutomaticRewardRedemptionAddEventMessage(obj.at("message").as_object());
    }

    user_input = value_as_string(obj, "user_input");
    redeemed_at = value_as_string(obj, "redeemed_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string id;
  std::optional<ChannelPointsAutomaticRewardRedemptionAddEventReward> reward;
  std::optional<ChannelPointsAutomaticRewardRedemptionAddEventMessage> message;
  std::string user_input;
  std::string redeemed_at;
};

class ChannelPointsAutomaticRewardRedemptionAddV2EventEmote {
public:
  ChannelPointsAutomaticRewardRedemptionAddV2EventEmote(){}

  ChannelPointsAutomaticRewardRedemptionAddV2EventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    name = value_as_string(obj, "name");
  }

  std::string id;
  std::string name;
};

class ChannelPointsAutomaticRewardRedemptionAddV2EventReward {
public:
  ChannelPointsAutomaticRewardRedemptionAddV2EventReward(){}

  ChannelPointsAutomaticRewardRedemptionAddV2EventReward(boost::json::object obj) {
    type = value_as_string(obj, "type");
    channel_points = value_as_int(obj, "channel_points");
    if (!obj["emote"].is_null()) {
      emote = ChannelPointsAutomaticRewardRedemptionAddV2EventEmote(obj.at("emote").as_object());
    }

  }

  std::string type;
  int channel_points;
  std::optional<ChannelPointsAutomaticRewardRedemptionAddV2EventEmote> emote;
};

class ChannelPointsAutomaticRewardRedemptionAddV2EventEmote {
public:
  ChannelPointsAutomaticRewardRedemptionAddV2EventEmote(){}

  ChannelPointsAutomaticRewardRedemptionAddV2EventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
  }

  std::string id;
};

class ChannelPointsAutomaticRewardRedemptionAddV2EventFragment {
public:
  ChannelPointsAutomaticRewardRedemptionAddV2EventFragment(){}

  ChannelPointsAutomaticRewardRedemptionAddV2EventFragment(boost::json::object obj) {
    text = value_as_string(obj, "text");
    type = value_as_string(obj, "type");
    if (!obj["emote"].is_null()) {
      emote = ChannelPointsAutomaticRewardRedemptionAddV2EventEmote(obj.at("emote").as_object());
    }

  }

  std::string text;
  std::string type;
  std::optional<ChannelPointsAutomaticRewardRedemptionAddV2EventEmote> emote;
};

class ChannelPointsAutomaticRewardRedemptionAddV2EventMessage {
public:
  ChannelPointsAutomaticRewardRedemptionAddV2EventMessage(){}

  ChannelPointsAutomaticRewardRedemptionAddV2EventMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<ChannelPointsAutomaticRewardRedemptionAddV2EventFragment> fragment;
};

class ChannelPointsAutomaticRewardRedemptionAddV2Event {
public:
  ChannelPointsAutomaticRewardRedemptionAddV2Event(){}

  ChannelPointsAutomaticRewardRedemptionAddV2Event(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    id = value_as_string(obj, "id");
    if (!obj["reward"].is_null()) {
      reward = ChannelPointsAutomaticRewardRedemptionAddV2EventReward(obj.at("reward").as_object());
    }

    if (!obj["message"].is_null()) {
      message = ChannelPointsAutomaticRewardRedemptionAddV2EventMessage(obj.at("message").as_object());
    }

    redeemed_at = value_as_string(obj, "redeemed_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string id;
  std::optional<ChannelPointsAutomaticRewardRedemptionAddV2EventReward> reward;
  std::optional<ChannelPointsAutomaticRewardRedemptionAddV2EventMessage> message;
  std::string redeemed_at;
};

class ChannelPointsCustomRewardAddEventMaxPerStream {
public:
  ChannelPointsCustomRewardAddEventMaxPerStream(){}

  ChannelPointsCustomRewardAddEventMaxPerStream(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardAddEventMaxPerUserPerStream {
public:
  ChannelPointsCustomRewardAddEventMaxPerUserPerStream(){}

  ChannelPointsCustomRewardAddEventMaxPerUserPerStream(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardAddEventImage {
public:
  ChannelPointsCustomRewardAddEventImage(){}

  ChannelPointsCustomRewardAddEventImage(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardAddEventDefaultImage {
public:
  ChannelPointsCustomRewardAddEventDefaultImage(){}

  ChannelPointsCustomRewardAddEventDefaultImage(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardAddEventGlobalCooldown {
public:
  ChannelPointsCustomRewardAddEventGlobalCooldown(){}

  ChannelPointsCustomRewardAddEventGlobalCooldown(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardAddEvent {
public:
  ChannelPointsCustomRewardAddEvent(){}

  ChannelPointsCustomRewardAddEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    is_enabled = obj.at("is_enabled").as_bool();
    is_paused = obj.at("is_paused").as_bool();
    is_in_stock = obj.at("is_in_stock").as_bool();
    title = value_as_string(obj, "title");
    cost = value_as_int(obj, "cost");
    prompt = value_as_string(obj, "prompt");
    is_user_input_required = obj.at("is_user_input_required").as_bool();
    should_redemptions_skip_request_queue = obj.at("should_redemptions_skip_request_queue").as_bool();
    if (!obj["max_per_stream"].is_null()) {
      max_per_stream = ChannelPointsCustomRewardAddEventMaxPerStream(obj.at("max_per_stream").as_object());
    }

    if (!obj["max_per_user_per_stream"].is_null()) {
      max_per_user_per_stream = ChannelPointsCustomRewardAddEventMaxPerUserPerStream(obj.at("max_per_user_per_stream").as_object());
    }

    background_color = value_as_string(obj, "background_color");
    if (!obj["image"].is_null()) {
      image = ChannelPointsCustomRewardAddEventImage(obj.at("image").as_object());
    }

    if (!obj["default_image"].is_null()) {
      default_image = ChannelPointsCustomRewardAddEventDefaultImage(obj.at("default_image").as_object());
    }

    if (!obj["global_cooldown"].is_null()) {
      global_cooldown = ChannelPointsCustomRewardAddEventGlobalCooldown(obj.at("global_cooldown").as_object());
    }

    cooldown_expires_at = value_as_string(obj, "cooldown_expires_at");
    redemptions_redeemed_current_stream = value_as_int(obj, "redemptions_redeemed_current_stream");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  bool is_enabled;
  bool is_paused;
  bool is_in_stock;
  std::string title;
  int cost;
  std::string prompt;
  bool is_user_input_required;
  bool should_redemptions_skip_request_queue;
  std::optional<ChannelPointsCustomRewardAddEventMaxPerStream> max_per_stream;
  std::optional<ChannelPointsCustomRewardAddEventMaxPerUserPerStream> max_per_user_per_stream;
  std::string background_color;
  std::optional<ChannelPointsCustomRewardAddEventImage> image;
  std::optional<ChannelPointsCustomRewardAddEventDefaultImage> default_image;
  std::optional<ChannelPointsCustomRewardAddEventGlobalCooldown> global_cooldown;
  std::string cooldown_expires_at;
  int redemptions_redeemed_current_stream;
};

class ChannelPointsCustomRewardUpdateEventMaxPerStream {
public:
  ChannelPointsCustomRewardUpdateEventMaxPerStream(){}

  ChannelPointsCustomRewardUpdateEventMaxPerStream(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardUpdateEventMaxPerUserPerStream {
public:
  ChannelPointsCustomRewardUpdateEventMaxPerUserPerStream(){}

  ChannelPointsCustomRewardUpdateEventMaxPerUserPerStream(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardUpdateEventImage {
public:
  ChannelPointsCustomRewardUpdateEventImage(){}

  ChannelPointsCustomRewardUpdateEventImage(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardUpdateEventDefaultImage {
public:
  ChannelPointsCustomRewardUpdateEventDefaultImage(){}

  ChannelPointsCustomRewardUpdateEventDefaultImage(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardUpdateEventGlobalCooldown {
public:
  ChannelPointsCustomRewardUpdateEventGlobalCooldown(){}

  ChannelPointsCustomRewardUpdateEventGlobalCooldown(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardUpdateEvent {
public:
  ChannelPointsCustomRewardUpdateEvent(){}

  ChannelPointsCustomRewardUpdateEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    is_enabled = obj.at("is_enabled").as_bool();
    is_paused = obj.at("is_paused").as_bool();
    is_in_stock = obj.at("is_in_stock").as_bool();
    title = value_as_string(obj, "title");
    cost = value_as_int(obj, "cost");
    prompt = value_as_string(obj, "prompt");
    is_user_input_required = obj.at("is_user_input_required").as_bool();
    should_redemptions_skip_request_queue = obj.at("should_redemptions_skip_request_queue").as_bool();
    if (!obj["max_per_stream"].is_null()) {
      max_per_stream = ChannelPointsCustomRewardUpdateEventMaxPerStream(obj.at("max_per_stream").as_object());
    }

    if (!obj["max_per_user_per_stream"].is_null()) {
      max_per_user_per_stream = ChannelPointsCustomRewardUpdateEventMaxPerUserPerStream(obj.at("max_per_user_per_stream").as_object());
    }

    background_color = value_as_string(obj, "background_color");
    if (!obj["image"].is_null()) {
      image = ChannelPointsCustomRewardUpdateEventImage(obj.at("image").as_object());
    }

    if (!obj["default_image"].is_null()) {
      default_image = ChannelPointsCustomRewardUpdateEventDefaultImage(obj.at("default_image").as_object());
    }

    if (!obj["global_cooldown"].is_null()) {
      global_cooldown = ChannelPointsCustomRewardUpdateEventGlobalCooldown(obj.at("global_cooldown").as_object());
    }

    cooldown_expires_at = value_as_string(obj, "cooldown_expires_at");
    redemptions_redeemed_current_stream = value_as_int(obj, "redemptions_redeemed_current_stream");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  bool is_enabled;
  bool is_paused;
  bool is_in_stock;
  std::string title;
  int cost;
  std::string prompt;
  bool is_user_input_required;
  bool should_redemptions_skip_request_queue;
  std::optional<ChannelPointsCustomRewardUpdateEventMaxPerStream> max_per_stream;
  std::optional<ChannelPointsCustomRewardUpdateEventMaxPerUserPerStream> max_per_user_per_stream;
  std::string background_color;
  std::optional<ChannelPointsCustomRewardUpdateEventImage> image;
  std::optional<ChannelPointsCustomRewardUpdateEventDefaultImage> default_image;
  std::optional<ChannelPointsCustomRewardUpdateEventGlobalCooldown> global_cooldown;
  std::string cooldown_expires_at;
  int redemptions_redeemed_current_stream;
};

class ChannelPointsCustomRewardRemoveEventMaxPerStream {
public:
  ChannelPointsCustomRewardRemoveEventMaxPerStream(){}

  ChannelPointsCustomRewardRemoveEventMaxPerStream(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardRemoveEventMaxPerUserPerStream {
public:
  ChannelPointsCustomRewardRemoveEventMaxPerUserPerStream(){}

  ChannelPointsCustomRewardRemoveEventMaxPerUserPerStream(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardRemoveEventImage {
public:
  ChannelPointsCustomRewardRemoveEventImage(){}

  ChannelPointsCustomRewardRemoveEventImage(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardRemoveEventDefaultImage {
public:
  ChannelPointsCustomRewardRemoveEventDefaultImage(){}

  ChannelPointsCustomRewardRemoveEventDefaultImage(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardRemoveEventGlobalCooldown {
public:
  ChannelPointsCustomRewardRemoveEventGlobalCooldown(){}

  ChannelPointsCustomRewardRemoveEventGlobalCooldown(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardRemoveEvent {
public:
  ChannelPointsCustomRewardRemoveEvent(){}

  ChannelPointsCustomRewardRemoveEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    is_enabled = obj.at("is_enabled").as_bool();
    is_paused = obj.at("is_paused").as_bool();
    is_in_stock = obj.at("is_in_stock").as_bool();
    title = value_as_string(obj, "title");
    cost = value_as_int(obj, "cost");
    prompt = value_as_string(obj, "prompt");
    is_user_input_required = obj.at("is_user_input_required").as_bool();
    should_redemptions_skip_request_queue = obj.at("should_redemptions_skip_request_queue").as_bool();
    if (!obj["max_per_stream"].is_null()) {
      max_per_stream = ChannelPointsCustomRewardRemoveEventMaxPerStream(obj.at("max_per_stream").as_object());
    }

    if (!obj["max_per_user_per_stream"].is_null()) {
      max_per_user_per_stream = ChannelPointsCustomRewardRemoveEventMaxPerUserPerStream(obj.at("max_per_user_per_stream").as_object());
    }

    background_color = value_as_string(obj, "background_color");
    if (!obj["image"].is_null()) {
      image = ChannelPointsCustomRewardRemoveEventImage(obj.at("image").as_object());
    }

    if (!obj["default_image"].is_null()) {
      default_image = ChannelPointsCustomRewardRemoveEventDefaultImage(obj.at("default_image").as_object());
    }

    if (!obj["global_cooldown"].is_null()) {
      global_cooldown = ChannelPointsCustomRewardRemoveEventGlobalCooldown(obj.at("global_cooldown").as_object());
    }

    cooldown_expires_at = value_as_string(obj, "cooldown_expires_at");
    redemptions_redeemed_current_stream = value_as_int(obj, "redemptions_redeemed_current_stream");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  bool is_enabled;
  bool is_paused;
  bool is_in_stock;
  std::string title;
  int cost;
  std::string prompt;
  bool is_user_input_required;
  bool should_redemptions_skip_request_queue;
  std::optional<ChannelPointsCustomRewardRemoveEventMaxPerStream> max_per_stream;
  std::optional<ChannelPointsCustomRewardRemoveEventMaxPerUserPerStream> max_per_user_per_stream;
  std::string background_color;
  std::optional<ChannelPointsCustomRewardRemoveEventImage> image;
  std::optional<ChannelPointsCustomRewardRemoveEventDefaultImage> default_image;
  std::optional<ChannelPointsCustomRewardRemoveEventGlobalCooldown> global_cooldown;
  std::string cooldown_expires_at;
  int redemptions_redeemed_current_stream;
};

class ChannelPointsCustomRewardRedemptionAddEventReward {
public:
  ChannelPointsCustomRewardRedemptionAddEventReward(){}

  ChannelPointsCustomRewardRedemptionAddEventReward(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardRedemptionAddEvent {
public:
  ChannelPointsCustomRewardRedemptionAddEvent(){}

  ChannelPointsCustomRewardRedemptionAddEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    user_input = value_as_string(obj, "user_input");
    status = value_as_string(obj, "status");
    if (!obj["reward"].is_null()) {
      reward = ChannelPointsCustomRewardRedemptionAddEventReward(obj.at("reward").as_object());
    }

    redeemed_at = value_as_string(obj, "redeemed_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string user_input;
  std::string status;
  std::optional<ChannelPointsCustomRewardRedemptionAddEventReward> reward;
  std::string redeemed_at;
};

class ChannelPointsCustomRewardRedemptionUpdateEventReward {
public:
  ChannelPointsCustomRewardRedemptionUpdateEventReward(){}

  ChannelPointsCustomRewardRedemptionUpdateEventReward(boost::json::object obj) {
  }

};

class ChannelPointsCustomRewardRedemptionUpdateEvent {
public:
  ChannelPointsCustomRewardRedemptionUpdateEvent(){}

  ChannelPointsCustomRewardRedemptionUpdateEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    user_input = value_as_string(obj, "user_input");
    status = value_as_string(obj, "status");
    if (!obj["reward"].is_null()) {
      reward = ChannelPointsCustomRewardRedemptionUpdateEventReward(obj.at("reward").as_object());
    }

    redeemed_at = value_as_string(obj, "redeemed_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string user_input;
  std::string status;
  std::optional<ChannelPointsCustomRewardRedemptionUpdateEventReward> reward;
  std::string redeemed_at;
};

class ChannelCustomPowerupRedemptionAddEventCustomPowerUp {
public:
  ChannelCustomPowerupRedemptionAddEventCustomPowerUp(){}

  ChannelCustomPowerupRedemptionAddEventCustomPowerUp(boost::json::object obj) {
  }

};

class ChannelCustomPowerupRedemptionAddEvent {
public:
  ChannelCustomPowerupRedemptionAddEvent(){}

  ChannelCustomPowerupRedemptionAddEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    user_input = value_as_string(obj, "user_input");
    status = value_as_string(obj, "status");
    if (!obj["custom_power_up"].is_null()) {
      custom_power_up = ChannelCustomPowerupRedemptionAddEventCustomPowerUp(obj.at("custom_power_up").as_object());
    }

    redeemed_at = value_as_string(obj, "redeemed_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string user_input;
  std::string status;
  std::optional<ChannelCustomPowerupRedemptionAddEventCustomPowerUp> custom_power_up;
  std::string redeemed_at;
};

class ChannelPredictionBeginEventOutcome {
public:
  ChannelPredictionBeginEventOutcome(){}

  ChannelPredictionBeginEventOutcome(boost::json::object obj) {
  }

};

class ChannelPredictionBeginEvent {
public:
  ChannelPredictionBeginEvent(){}

  ChannelPredictionBeginEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    if (!obj["outcomes"].is_null()) {
      for (auto item : obj.at("outcomes").as_array()) {
          outcome.push_back(item.as_object());
      }
    }

    started_at = value_as_string(obj, "started_at");
    locks_at = value_as_string(obj, "locks_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::vector<ChannelPredictionBeginEventOutcome> outcome;
  std::string started_at;
  std::string locks_at;
};

class ChannelPredictionProgressEventOutcome {
public:
  ChannelPredictionProgressEventOutcome(){}

  ChannelPredictionProgressEventOutcome(boost::json::object obj) {
  }

};

class ChannelPredictionProgressEvent {
public:
  ChannelPredictionProgressEvent(){}

  ChannelPredictionProgressEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    if (!obj["outcomes"].is_null()) {
      for (auto item : obj.at("outcomes").as_array()) {
          outcome.push_back(item.as_object());
      }
    }

    started_at = value_as_string(obj, "started_at");
    locks_at = value_as_string(obj, "locks_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::vector<ChannelPredictionProgressEventOutcome> outcome;
  std::string started_at;
  std::string locks_at;
};

class ChannelPredictionLockEventOutcome {
public:
  ChannelPredictionLockEventOutcome(){}

  ChannelPredictionLockEventOutcome(boost::json::object obj) {
  }

};

class ChannelPredictionLockEvent {
public:
  ChannelPredictionLockEvent(){}

  ChannelPredictionLockEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    if (!obj["outcomes"].is_null()) {
      for (auto item : obj.at("outcomes").as_array()) {
          outcome.push_back(item.as_object());
      }
    }

    started_at = value_as_string(obj, "started_at");
    locked_at = value_as_string(obj, "locked_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::vector<ChannelPredictionLockEventOutcome> outcome;
  std::string started_at;
  std::string locked_at;
};

class ChannelPredictionEndEventOutcome {
public:
  ChannelPredictionEndEventOutcome(){}

  ChannelPredictionEndEventOutcome(boost::json::object obj) {
  }

};

class ChannelPredictionEndEvent {
public:
  ChannelPredictionEndEvent(){}

  ChannelPredictionEndEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    title = value_as_string(obj, "title");
    winning_outcome_id = value_as_string(obj, "winning_outcome_id");
    if (!obj["outcomes"].is_null()) {
      for (auto item : obj.at("outcomes").as_array()) {
          outcome.push_back(item.as_object());
      }
    }

    status = value_as_string(obj, "status");
    started_at = value_as_string(obj, "started_at");
    ended_at = value_as_string(obj, "ended_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string title;
  std::string winning_outcome_id;
  std::vector<ChannelPredictionEndEventOutcome> outcome;
  std::string status;
  std::string started_at;
  std::string ended_at;
};

class ChannelSharedChatSessionBeginEventParticipants {
public:
  ChannelSharedChatSessionBeginEventParticipants(){}

  ChannelSharedChatSessionBeginEventParticipants(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
};

class ChannelSharedChatSessionBeginEvent {
public:
  ChannelSharedChatSessionBeginEvent(){}

  ChannelSharedChatSessionBeginEvent(boost::json::object obj) {
    session_id = value_as_string(obj, "session_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    host_broadcaster_user_id = value_as_string(obj, "host_broadcaster_user_id");
    host_broadcaster_user_name = value_as_string(obj, "host_broadcaster_user_name");
    host_broadcaster_user_login = value_as_string(obj, "host_broadcaster_user_login");
    if (!obj["participants"].is_null()) {
      participants = ChannelSharedChatSessionBeginEventParticipants(obj.at("participants").as_object());
    }

  }

  std::string session_id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string host_broadcaster_user_id;
  std::string host_broadcaster_user_name;
  std::string host_broadcaster_user_login;
  std::optional<ChannelSharedChatSessionBeginEventParticipants> participants;
};

class ChannelSharedChatSessionUpdateEventParticipants {
public:
  ChannelSharedChatSessionUpdateEventParticipants(){}

  ChannelSharedChatSessionUpdateEventParticipants(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
};

class ChannelSharedChatSessionUpdateEvent {
public:
  ChannelSharedChatSessionUpdateEvent(){}

  ChannelSharedChatSessionUpdateEvent(boost::json::object obj) {
    session_id = value_as_string(obj, "session_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    host_broadcaster_user_id = value_as_string(obj, "host_broadcaster_user_id");
    host_broadcaster_user_name = value_as_string(obj, "host_broadcaster_user_name");
    host_broadcaster_user_login = value_as_string(obj, "host_broadcaster_user_login");
    if (!obj["participants"].is_null()) {
      participants = ChannelSharedChatSessionUpdateEventParticipants(obj.at("participants").as_object());
    }

  }

  std::string session_id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string host_broadcaster_user_id;
  std::string host_broadcaster_user_name;
  std::string host_broadcaster_user_login;
  std::optional<ChannelSharedChatSessionUpdateEventParticipants> participants;
};

class ChannelSharedChatSessionEndEvent {
public:
  ChannelSharedChatSessionEndEvent(){}

  ChannelSharedChatSessionEndEvent(boost::json::object obj) {
    session_id = value_as_string(obj, "session_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    host_broadcaster_user_id = value_as_string(obj, "host_broadcaster_user_id");
    host_broadcaster_user_name = value_as_string(obj, "host_broadcaster_user_name");
    host_broadcaster_user_login = value_as_string(obj, "host_broadcaster_user_login");
  }

  std::string session_id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string host_broadcaster_user_id;
  std::string host_broadcaster_user_name;
  std::string host_broadcaster_user_login;
};

class ChannelSubscriptionEndEvent {
public:
  ChannelSubscriptionEndEvent(){}

  ChannelSubscriptionEndEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    tier = value_as_string(obj, "tier");
    is_gift = obj.at("is_gift").as_bool();
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string tier;
  bool is_gift;
};

class ChannelSubscriptionGiftEvent {
public:
  ChannelSubscriptionGiftEvent(){}

  ChannelSubscriptionGiftEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    total = value_as_int(obj, "total");
    tier = value_as_string(obj, "tier");
    cumulative_total = value_as_int(obj, "cumulative_total");
    is_anonymous = obj.at("is_anonymous").as_bool();
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  int total;
  std::string tier;
  int cumulative_total;
  bool is_anonymous;
};

class ChannelSubscriptionMessageEventMessage {
public:
  ChannelSubscriptionMessageEventMessage(){}

  ChannelSubscriptionMessageEventMessage(boost::json::object obj) {
  }

};

class ChannelSubscriptionMessageEvent {
public:
  ChannelSubscriptionMessageEvent(){}

  ChannelSubscriptionMessageEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    tier = value_as_string(obj, "tier");
    if (!obj["message"].is_null()) {
      message = ChannelSubscriptionMessageEventMessage(obj.at("message").as_object());
    }

    cumulative_months = value_as_int(obj, "cumulative_months");
    streak_months = value_as_int(obj, "streak_months");
    duration_months = value_as_int(obj, "duration_months");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string tier;
  std::optional<ChannelSubscriptionMessageEventMessage> message;
  int cumulative_months;
  int streak_months;
  int duration_months;
};

class ChannelSuspiciousUserUpdateEvent {
public:
  ChannelSuspiciousUserUpdateEvent(){}

  ChannelSuspiciousUserUpdateEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    user_id = value_as_string(obj, "user_id");
    user_name = value_as_string(obj, "user_name");
    user_login = value_as_string(obj, "user_login");
    low_trust_status = value_as_string(obj, "low_trust_status");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string moderator_user_id;
  std::string moderator_user_name;
  std::string moderator_user_login;
  std::string user_id;
  std::string user_name;
  std::string user_login;
  std::string low_trust_status;
};

class ChannelSuspiciousUserMessageEventCheermote {
public:
  ChannelSuspiciousUserMessageEventCheermote(){}

  ChannelSuspiciousUserMessageEventCheermote(boost::json::object obj) {
    prefix = value_as_string(obj, "prefix");
    bits = value_as_string(obj, "bits");
    tier = value_as_string(obj, "tier");
  }

  std::string prefix;
  std::string bits;
  std::string tier;
};

class ChannelSuspiciousUserMessageEventEmote {
public:
  ChannelSuspiciousUserMessageEventEmote(){}

  ChannelSuspiciousUserMessageEventEmote(boost::json::object obj) {
    id = value_as_string(obj, "id");
    emote_set_id = value_as_string(obj, "emote_set_id");
  }

  std::string id;
  std::string emote_set_id;
};

class ChannelSuspiciousUserMessageEventFragment {
public:
  ChannelSuspiciousUserMessageEventFragment(){}

  ChannelSuspiciousUserMessageEventFragment(boost::json::object obj) {
    type = value_as_string(obj, "type");
    text = value_as_string(obj, "text");
    if (!obj["cheermote"].is_null()) {
      cheermote = ChannelSuspiciousUserMessageEventCheermote(obj.at("cheermote").as_object());
    }

    if (!obj["emote"].is_null()) {
      emote = ChannelSuspiciousUserMessageEventEmote(obj.at("emote").as_object());
    }

  }

  std::string type;
  std::string text;
  std::optional<ChannelSuspiciousUserMessageEventCheermote> cheermote;
  std::optional<ChannelSuspiciousUserMessageEventEmote> emote;
};

class ChannelSuspiciousUserMessageEventMessage {
public:
  ChannelSuspiciousUserMessageEventMessage(){}

  ChannelSuspiciousUserMessageEventMessage(boost::json::object obj) {
    message_id = value_as_string(obj, "message_id");
    text = value_as_string(obj, "text");
    if (!obj["fragments"].is_null()) {
      for (auto item : obj.at("fragments").as_array()) {
          fragment.push_back(item.as_object());
      }
    }

  }

  std::string message_id;
  std::string text;
  std::vector<ChannelSuspiciousUserMessageEventFragment> fragment;
};

class ChannelSuspiciousUserMessageEvent {
public:
  ChannelSuspiciousUserMessageEvent(){}

  ChannelSuspiciousUserMessageEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    user_id = value_as_string(obj, "user_id");
    user_name = value_as_string(obj, "user_name");
    user_login = value_as_string(obj, "user_login");
    low_trust_status = value_as_string(obj, "low_trust_status");
    if (!obj["shared_ban_channel_ids"].is_null()) {
      for (auto item : obj.at("shared_ban_channel_ids").as_array()) {
          shared_ban_channel_ids.push_back(item.as_string().c_str());
      }
    }

    if (!obj["types"].is_null()) {
      for (auto item : obj.at("types").as_array()) {
          types.push_back(item.as_string().c_str());
      }
    }

    ban_evasion_evaluation = value_as_string(obj, "ban_evasion_evaluation");
    if (!obj["message"].is_null()) {
      message = ChannelSuspiciousUserMessageEventMessage(obj.at("message").as_object());
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string user_id;
  std::string user_name;
  std::string user_login;
  std::string low_trust_status;
  std::vector<std::string> shared_ban_channel_ids;
  std::vector<std::string> types;
  std::string ban_evasion_evaluation;
  std::optional<ChannelSuspiciousUserMessageEventMessage> message;
};

class ChannelVipAddEvent {
public:
  ChannelVipAddEvent(){}

  ChannelVipAddEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
};

class ChannelVipRemoveEvent {
public:
  ChannelVipRemoveEvent(){}

  ChannelVipRemoveEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
};

class ChannelWarningAcknowledgeEvent {
public:
  ChannelWarningAcknowledgeEvent(){}

  ChannelWarningAcknowledgeEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class ChannelWarningSendEvent {
public:
  ChannelWarningSendEvent(){}

  ChannelWarningSendEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    reason = value_as_string(obj, "reason");
    if (!obj["chat_rules_cited"].is_null()) {
      for (auto item : obj.at("chat_rules_cited").as_array()) {
          chat_rules_cited.push_back(item.as_string().c_str());
      }
    }

  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string reason;
  std::vector<std::string> chat_rules_cited;
};

class CharityDonationEventAmount {
public:
  CharityDonationEventAmount(){}

  CharityDonationEventAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_places = value_as_int(obj, "decimal_places");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_places;
  std::string currency;
};

class CharityDonationEvent {
public:
  CharityDonationEvent(){}

  CharityDonationEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    campaign_id = value_as_string(obj, "campaign_id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    charity_name = value_as_string(obj, "charity_name");
    charity_description = value_as_string(obj, "charity_description");
    charity_logo = value_as_string(obj, "charity_logo");
    charity_website = value_as_string(obj, "charity_website");
    if (!obj["amount"].is_null()) {
      amount = CharityDonationEventAmount(obj.at("amount").as_object());
    }

  }

  std::string id;
  std::string campaign_id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string charity_name;
  std::string charity_description;
  std::string charity_logo;
  std::string charity_website;
  std::optional<CharityDonationEventAmount> amount;
};

class CharityCampaignStartEventCurrentAmount {
public:
  CharityCampaignStartEventCurrentAmount(){}

  CharityCampaignStartEventCurrentAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_places = value_as_int(obj, "decimal_places");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_places;
  std::string currency;
};

class CharityCampaignStartEventTargetAmount {
public:
  CharityCampaignStartEventTargetAmount(){}

  CharityCampaignStartEventTargetAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_places = value_as_int(obj, "decimal_places");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_places;
  std::string currency;
};

class CharityCampaignStartEvent {
public:
  CharityCampaignStartEvent(){}

  CharityCampaignStartEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_id = value_as_string(obj, "broadcaster_id");
    broadcaster_login = value_as_string(obj, "broadcaster_login");
    broadcaster_name = value_as_string(obj, "broadcaster_name");
    charity_name = value_as_string(obj, "charity_name");
    charity_description = value_as_string(obj, "charity_description");
    charity_logo = value_as_string(obj, "charity_logo");
    charity_website = value_as_string(obj, "charity_website");
    if (!obj["current_amount"].is_null()) {
      current_amount = CharityCampaignStartEventCurrentAmount(obj.at("current_amount").as_object());
    }

    if (!obj["target_amount"].is_null()) {
      target_amount = CharityCampaignStartEventTargetAmount(obj.at("target_amount").as_object());
    }

    started_at = value_as_string(obj, "started_at");
  }

  std::string id;
  std::string broadcaster_id;
  std::string broadcaster_login;
  std::string broadcaster_name;
  std::string charity_name;
  std::string charity_description;
  std::string charity_logo;
  std::string charity_website;
  std::optional<CharityCampaignStartEventCurrentAmount> current_amount;
  std::optional<CharityCampaignStartEventTargetAmount> target_amount;
  std::string started_at;
};

class CharityCampaignProgressEventCurrentAmount {
public:
  CharityCampaignProgressEventCurrentAmount(){}

  CharityCampaignProgressEventCurrentAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_places = value_as_int(obj, "decimal_places");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_places;
  std::string currency;
};

class CharityCampaignProgressEventTargetAmount {
public:
  CharityCampaignProgressEventTargetAmount(){}

  CharityCampaignProgressEventTargetAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_places = value_as_int(obj, "decimal_places");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_places;
  std::string currency;
};

class CharityCampaignProgressEvent {
public:
  CharityCampaignProgressEvent(){}

  CharityCampaignProgressEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_id = value_as_string(obj, "broadcaster_id");
    broadcaster_login = value_as_string(obj, "broadcaster_login");
    broadcaster_name = value_as_string(obj, "broadcaster_name");
    charity_name = value_as_string(obj, "charity_name");
    charity_description = value_as_string(obj, "charity_description");
    charity_logo = value_as_string(obj, "charity_logo");
    charity_website = value_as_string(obj, "charity_website");
    if (!obj["current_amount"].is_null()) {
      current_amount = CharityCampaignProgressEventCurrentAmount(obj.at("current_amount").as_object());
    }

    if (!obj["target_amount"].is_null()) {
      target_amount = CharityCampaignProgressEventTargetAmount(obj.at("target_amount").as_object());
    }

  }

  std::string id;
  std::string broadcaster_id;
  std::string broadcaster_login;
  std::string broadcaster_name;
  std::string charity_name;
  std::string charity_description;
  std::string charity_logo;
  std::string charity_website;
  std::optional<CharityCampaignProgressEventCurrentAmount> current_amount;
  std::optional<CharityCampaignProgressEventTargetAmount> target_amount;
};

class CharityCampaignStopEventCurrentAmount {
public:
  CharityCampaignStopEventCurrentAmount(){}

  CharityCampaignStopEventCurrentAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_places = value_as_int(obj, "decimal_places");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_places;
  std::string currency;
};

class CharityCampaignStopEventTargetAmount {
public:
  CharityCampaignStopEventTargetAmount(){}

  CharityCampaignStopEventTargetAmount(boost::json::object obj) {
    value = value_as_int(obj, "value");
    decimal_places = value_as_int(obj, "decimal_places");
    currency = value_as_string(obj, "currency");
  }

  int value;
  int decimal_places;
  std::string currency;
};

class CharityCampaignStopEvent {
public:
  CharityCampaignStopEvent(){}

  CharityCampaignStopEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_id = value_as_string(obj, "broadcaster_id");
    broadcaster_login = value_as_string(obj, "broadcaster_login");
    broadcaster_name = value_as_string(obj, "broadcaster_name");
    charity_name = value_as_string(obj, "charity_name");
    charity_description = value_as_string(obj, "charity_description");
    charity_logo = value_as_string(obj, "charity_logo");
    charity_website = value_as_string(obj, "charity_website");
    if (!obj["current_amount"].is_null()) {
      current_amount = CharityCampaignStopEventCurrentAmount(obj.at("current_amount").as_object());
    }

    if (!obj["target_amount"].is_null()) {
      target_amount = CharityCampaignStopEventTargetAmount(obj.at("target_amount").as_object());
    }

    stopped_at = value_as_string(obj, "stopped_at");
  }

  std::string id;
  std::string broadcaster_id;
  std::string broadcaster_login;
  std::string broadcaster_name;
  std::string charity_name;
  std::string charity_description;
  std::string charity_logo;
  std::string charity_website;
  std::optional<CharityCampaignStopEventCurrentAmount> current_amount;
  std::optional<CharityCampaignStopEventTargetAmount> target_amount;
  std::string stopped_at;
};

class ConduitShardDisabledEventTransport {
public:
  ConduitShardDisabledEventTransport(){}

  ConduitShardDisabledEventTransport(boost::json::object obj) {
  }

};

class ConduitShardDisabledEvent {
public:
  ConduitShardDisabledEvent(){}

  ConduitShardDisabledEvent(boost::json::object obj) {
    conduit_id = value_as_string(obj, "conduit_id");
    shard_id = value_as_string(obj, "shard_id");
    status = value_as_string(obj, "status");
    if (!obj["transport"].is_null()) {
      transport = ConduitShardDisabledEventTransport(obj.at("transport").as_object());
    }

    method = value_as_string(obj, "method");
    callback = value_as_string(obj, "callback");
    session_id = value_as_string(obj, "session_id");
    connected_at = value_as_string(obj, "connected_at");
    disconnected_at = value_as_string(obj, "disconnected_at");
  }

  std::string conduit_id;
  std::string shard_id;
  std::string status;
  std::optional<ConduitShardDisabledEventTransport> transport;
  std::string method;
  std::string callback;
  std::string session_id;
  std::string connected_at;
  std::string disconnected_at;
};

class ExtensionBitsTransactionCreateEventProduct {
public:
  ExtensionBitsTransactionCreateEventProduct(){}

  ExtensionBitsTransactionCreateEventProduct(boost::json::object obj) {
  }

};

class ExtensionBitsTransactionCreateEvent {
public:
  ExtensionBitsTransactionCreateEvent(){}

  ExtensionBitsTransactionCreateEvent(boost::json::object obj) {
    extension_client_id = value_as_string(obj, "extension_client_id");
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    if (!obj["product"].is_null()) {
      product = ExtensionBitsTransactionCreateEventProduct(obj.at("product").as_object());
    }

  }

  std::string extension_client_id;
  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::optional<ExtensionBitsTransactionCreateEventProduct> product;
};

class GoalsEvent {
public:
  GoalsEvent(){}

  GoalsEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    type = value_as_string(obj, "type");
    description = value_as_string(obj, "description");
    is_achieved = obj.at("is_achieved").as_bool();
    current_amount = value_as_int(obj, "current_amount");
    target_amount = value_as_int(obj, "target_amount");
    started_at = value_as_string(obj, "started_at");
    ended_at = value_as_string(obj, "ended_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_name;
  std::string broadcaster_user_login;
  std::string type;
  std::string description;
  bool is_achieved;
  int current_amount;
  int target_amount;
  std::string started_at;
  std::string ended_at;
};

class HypeTrainBeginEventTopContributions {
public:
  HypeTrainBeginEventTopContributions(){}

  HypeTrainBeginEventTopContributions(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    type = value_as_string(obj, "type");
    total = value_as_int(obj, "total");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string type;
  int total;
};

class HypeTrainBeginEventSharedTrainParticipant {
public:
  HypeTrainBeginEventSharedTrainParticipant(){}

  HypeTrainBeginEventSharedTrainParticipant(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
};

class HypeTrainBeginEvent {
public:
  HypeTrainBeginEvent(){}

  HypeTrainBeginEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    total = value_as_int(obj, "total");
    progress = value_as_int(obj, "progress");
    goal = value_as_int(obj, "goal");
    if (!obj["top_contributions"].is_null()) {
      top_contributions = HypeTrainBeginEventTopContributions(obj.at("top_contributions").as_object());
    }

    level = value_as_int(obj, "level");
    all_time_high_level = value_as_int(obj, "all_time_high_level");
    all_time_high_total = value_as_int(obj, "all_time_high_total");
    if (!obj["shared_train_participants"].is_null()) {
      for (auto item : obj.at("shared_train_participants").as_array()) {
          shared_train_participant.push_back(item.as_object());
      }
    }

    started_at = value_as_string(obj, "started_at");
    expires_at = value_as_string(obj, "expires_at");
    type = value_as_string(obj, "type");
    is_shared_train = obj.at("is_shared_train").as_bool();
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  int total;
  int progress;
  int goal;
  std::optional<HypeTrainBeginEventTopContributions> top_contributions;
  int level;
  int all_time_high_level;
  int all_time_high_total;
  std::vector<HypeTrainBeginEventSharedTrainParticipant> shared_train_participant;
  std::string started_at;
  std::string expires_at;
  std::string type;
  bool is_shared_train;
};

class HypeTrainProgressEventTopContributions {
public:
  HypeTrainProgressEventTopContributions(){}

  HypeTrainProgressEventTopContributions(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    type = value_as_string(obj, "type");
    total = value_as_int(obj, "total");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string type;
  int total;
};

class HypeTrainProgressEventSharedTrainParticipant {
public:
  HypeTrainProgressEventSharedTrainParticipant(){}

  HypeTrainProgressEventSharedTrainParticipant(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
};

class HypeTrainProgressEvent {
public:
  HypeTrainProgressEvent(){}

  HypeTrainProgressEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    total = value_as_int(obj, "total");
    progress = value_as_int(obj, "progress");
    goal = value_as_int(obj, "goal");
    if (!obj["top_contributions"].is_null()) {
      top_contributions = HypeTrainProgressEventTopContributions(obj.at("top_contributions").as_object());
    }

    level = value_as_int(obj, "level");
    if (!obj["shared_train_participants"].is_null()) {
      for (auto item : obj.at("shared_train_participants").as_array()) {
          shared_train_participant.push_back(item.as_object());
      }
    }

    started_at = value_as_string(obj, "started_at");
    expires_at = value_as_string(obj, "expires_at");
    type = value_as_string(obj, "type");
    is_shared_train = obj.at("is_shared_train").as_bool();
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  int total;
  int progress;
  int goal;
  std::optional<HypeTrainProgressEventTopContributions> top_contributions;
  int level;
  std::vector<HypeTrainProgressEventSharedTrainParticipant> shared_train_participant;
  std::string started_at;
  std::string expires_at;
  std::string type;
  bool is_shared_train;
};

class TopContribution {
public:
  TopContribution(){}

  TopContribution(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    type = value_as_string(obj, "type");
    total = value_as_int(obj, "total");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string type;
  int total;
};

class HypeTrainEndEventSharedTrainParticipant {
public:
  HypeTrainEndEventSharedTrainParticipant(){}

  HypeTrainEndEventSharedTrainParticipant(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
};

class HypeTrainEndEvent {
public:
  HypeTrainEndEvent(){}

  HypeTrainEndEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    total = value_as_int(obj, "total");
    if (!obj["top_contributions"].is_null()) {
      for (auto item : obj.at("top_contributions").as_array()) {
          top_contribution.push_back(item.as_object());
      }
    }

    level = value_as_int(obj, "level");
    if (!obj["shared_train_participants"].is_null()) {
      for (auto item : obj.at("shared_train_participants").as_array()) {
          shared_train_participant.push_back(item.as_object());
      }
    }

    started_at = value_as_string(obj, "started_at");
    cooldown_ends_at = value_as_string(obj, "cooldown_ends_at");
    ended_at = value_as_string(obj, "ended_at");
    type = value_as_string(obj, "type");
    is_shared_train = obj.at("is_shared_train").as_bool();
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  int total;
  std::vector<TopContribution> top_contribution;
  int level;
  std::vector<HypeTrainEndEventSharedTrainParticipant> shared_train_participant;
  std::string started_at;
  std::string cooldown_ends_at;
  std::string ended_at;
  std::string type;
  bool is_shared_train;
};

class StreamOnlineEvent {
public:
  StreamOnlineEvent(){}

  StreamOnlineEvent(boost::json::object obj) {
    id = value_as_string(obj, "id");
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    type = value_as_string(obj, "type");
    started_at = value_as_string(obj, "started_at");
  }

  std::string id;
  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string type;
  std::string started_at;
};

class StreamOfflineEvent {
public:
  StreamOfflineEvent(){}

  StreamOfflineEvent(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
};

class UserAuthorizationGrantEvent {
public:
  UserAuthorizationGrantEvent(){}

  UserAuthorizationGrantEvent(boost::json::object obj) {
    client_id = value_as_string(obj, "client_id");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string client_id;
  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class UserAuthorizationRevokeEvent {
public:
  UserAuthorizationRevokeEvent(){}

  UserAuthorizationRevokeEvent(boost::json::object obj) {
    client_id = value_as_string(obj, "client_id");
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
  }

  std::string client_id;
  std::string user_id;
  std::string user_login;
  std::string user_name;
};

class UserUpdateEvent {
public:
  UserUpdateEvent(){}

  UserUpdateEvent(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    email = value_as_string(obj, "email");
    email_verified = obj.at("email_verified").as_bool();
    description = value_as_string(obj, "description");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string email;
  bool email_verified;
  std::string description;
};

class Whisper {
public:
  Whisper(){}

  Whisper(boost::json::object obj) {
    text = value_as_string(obj, "text");
  }

  std::string text;
};

class WhisperReceivedEvent {
public:
  WhisperReceivedEvent(){}

  WhisperReceivedEvent(boost::json::object obj) {
    from_user_id = value_as_string(obj, "from_user_id");
    from_user_name = value_as_string(obj, "from_user_name");
    from_user_login = value_as_string(obj, "from_user_login");
    to_user_id = value_as_string(obj, "to_user_id");
    to_user_name = value_as_string(obj, "to_user_name");
    to_user_login = value_as_string(obj, "to_user_login");
    whisper_id = value_as_string(obj, "whisper_id");
    if (!obj["whisper"].is_null()) {
      whisper = Whisper(obj.at("whisper").as_object());
    }

  }

  std::string from_user_id;
  std::string from_user_name;
  std::string from_user_login;
  std::string to_user_id;
  std::string to_user_name;
  std::string to_user_login;
  std::string whisper_id;
  std::optional<Whisper> whisper;
};

class GlobalCooldownGlobalCooldown {
public:
  GlobalCooldownGlobalCooldown(){}

  GlobalCooldownGlobalCooldown(boost::json::object obj) {
    is_enabled = obj.at("is_enabled").as_bool();
    seconds = value_as_int(obj, "seconds");
  }

  bool is_enabled;
  int seconds;
};

class ImageImage {
public:
  ImageImage(){}

  ImageImage(boost::json::object obj) {
    url_1x = value_as_string(obj, "url_1x");
    url_2x = value_as_string(obj, "url_2x");
    url_4x = value_as_string(obj, "url_4x");
  }

  std::string url_1x;
  std::string url_2x;
  std::string url_4x;
};

class LastContribution {
public:
  LastContribution(){}

  LastContribution(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    type = value_as_string(obj, "type");
    total = value_as_int(obj, "total");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string type;
  int total;
};

class MaxPerStreamMaxPerStream {
public:
  MaxPerStreamMaxPerStream(){}

  MaxPerStreamMaxPerStream(boost::json::object obj) {
    is_enabled = obj.at("is_enabled").as_bool();
    value = value_as_int(obj, "value");
  }

  bool is_enabled;
  int value;
};

class MaxPerUserPerStreamMaxPerUserPerStream {
public:
  MaxPerUserPerStreamMaxPerUserPerStream(){}

  MaxPerUserPerStreamMaxPerUserPerStream(boost::json::object obj) {
    is_enabled = obj.at("is_enabled").as_bool();
    value = value_as_int(obj, "value");
  }

  bool is_enabled;
  int value;
};

class MessageEmote {
public:
  MessageEmote(){}

  MessageEmote(boost::json::object obj) {
  }

};

class MessageMessage {
public:
  MessageMessage(){}

  MessageMessage(boost::json::object obj) {
    text = value_as_string(obj, "text");
    if (!obj["emotes"].is_null()) {
      for (auto item : obj.at("emotes").as_array()) {
          emote.push_back(item.as_object());
      }
    }

  }

  std::string text;
  std::vector<MessageEmote> emote;
};

class TopPredictor {
public:
  TopPredictor(){}

  TopPredictor(boost::json::object obj) {
  }

};

class Outcomes {
public:
  Outcomes(){}

  Outcomes(boost::json::object obj) {
    id = value_as_string(obj, "id");
    title = value_as_string(obj, "title");
    color = value_as_string(obj, "color");
    users = value_as_int(obj, "users");
    channel_points = value_as_int(obj, "channel_points");
    if (!obj["top_predictors"].is_null()) {
      for (auto item : obj.at("top_predictors").as_array()) {
          top_predictor.push_back(item.as_object());
      }
    }

  }

  std::string id;
  std::string title;
  std::string color;
  int users;
  int channel_points;
  std::vector<TopPredictor> top_predictor;
};

class ProductProduct {
public:
  ProductProduct(){}

  ProductProduct(boost::json::object obj) {
    name = value_as_string(obj, "name");
    bits = value_as_int(obj, "bits");
    sku = value_as_string(obj, "sku");
    in_development = obj.at("in_development").as_bool();
  }

  std::string name;
  int bits;
  std::string sku;
  bool in_development;
};

class RewardReward {
public:
  RewardReward(){}

  RewardReward(boost::json::object obj) {
    id = value_as_string(obj, "id");
    title = value_as_string(obj, "title");
    cost = value_as_int(obj, "cost");
    prompt = value_as_string(obj, "prompt");
  }

  std::string id;
  std::string title;
  int cost;
  std::string prompt;
};

class ShieldMode {
public:
  ShieldMode(){}

  ShieldMode(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    started_at = value_as_string(obj, "started_at");
    ended_at = value_as_string(obj, "ended_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  std::string started_at;
  std::string ended_at;
};

class ShoutoutCreate {
public:
  ShoutoutCreate(){}

  ShoutoutCreate(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    to_broadcaster_user_id = value_as_string(obj, "to_broadcaster_user_id");
    to_broadcaster_user_login = value_as_string(obj, "to_broadcaster_user_login");
    to_broadcaster_user_name = value_as_string(obj, "to_broadcaster_user_name");
    moderator_user_id = value_as_string(obj, "moderator_user_id");
    moderator_user_login = value_as_string(obj, "moderator_user_login");
    moderator_user_name = value_as_string(obj, "moderator_user_name");
    viewer_count = value_as_int(obj, "viewer_count");
    started_at = value_as_string(obj, "started_at");
    cooldown_ends_at = value_as_string(obj, "cooldown_ends_at");
    target_cooldown_ends_at = value_as_string(obj, "target_cooldown_ends_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string to_broadcaster_user_id;
  std::string to_broadcaster_user_login;
  std::string to_broadcaster_user_name;
  std::string moderator_user_id;
  std::string moderator_user_login;
  std::string moderator_user_name;
  int viewer_count;
  std::string started_at;
  std::string cooldown_ends_at;
  std::string target_cooldown_ends_at;
};

class ShoutoutReceived {
public:
  ShoutoutReceived(){}

  ShoutoutReceived(boost::json::object obj) {
    broadcaster_user_id = value_as_string(obj, "broadcaster_user_id");
    broadcaster_user_login = value_as_string(obj, "broadcaster_user_login");
    broadcaster_user_name = value_as_string(obj, "broadcaster_user_name");
    from_broadcaster_user_id = value_as_string(obj, "from_broadcaster_user_id");
    from_broadcaster_user_login = value_as_string(obj, "from_broadcaster_user_login");
    from_broadcaster_user_name = value_as_string(obj, "from_broadcaster_user_name");
    viewer_count = value_as_int(obj, "viewer_count");
    started_at = value_as_string(obj, "started_at");
  }

  std::string broadcaster_user_id;
  std::string broadcaster_user_login;
  std::string broadcaster_user_name;
  std::string from_broadcaster_user_id;
  std::string from_broadcaster_user_login;
  std::string from_broadcaster_user_name;
  int viewer_count;
  std::string started_at;
};

class Condition {
public:
  Condition(){}

  Condition(boost::json::object obj) {
  }

};

class Subscription {
public:
  Subscription(){}

  Subscription(boost::json::object obj) {
    id = value_as_string(obj, "id");
    type = value_as_string(obj, "type");
    version = value_as_string(obj, "version");
    status = value_as_string(obj, "status");
    cost = value_as_int(obj, "cost");
    if (!obj["condition"].is_null()) {
      condition = Condition(obj.at("condition").as_object());
    }

    created_at = value_as_string(obj, "created_at");
  }

  std::string id;
  std::string type;
  std::string version;
  std::string status;
  int cost;
  std::optional<Condition> condition;
  std::string created_at;
};

class TopContributionsTopContributions {
public:
  TopContributionsTopContributions(){}

  TopContributionsTopContributions(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    type = value_as_string(obj, "type");
    total = value_as_int(obj, "total");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  std::string type;
  int total;
};

class TopPredictors {
public:
  TopPredictors(){}

  TopPredictors(boost::json::object obj) {
    user_id = value_as_string(obj, "user_id");
    user_login = value_as_string(obj, "user_login");
    user_name = value_as_string(obj, "user_name");
    channel_points_won = value_as_int(obj, "channel_points_won");
    channel_points_used = value_as_int(obj, "channel_points_used");
  }

  std::string user_id;
  std::string user_login;
  std::string user_name;
  int channel_points_won;
  int channel_points_used;
};

class TransportTransport {
public:
  TransportTransport(){}

  TransportTransport(boost::json::object obj) {
    method = value_as_string(obj, "method");
    callback = value_as_string(obj, "callback");
    secret = value_as_string(obj, "secret");
    session_id = value_as_string(obj, "session_id");
    connected_at = value_as_string(obj, "connected_at");
    disconnected_at = value_as_string(obj, "disconnected_at");
  }

  std::string method;
  std::string callback;
  std::string secret;
  std::string session_id;
  std::string connected_at;
  std::string disconnected_at;
};

